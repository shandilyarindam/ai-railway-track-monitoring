// Railway Track Tampering Detection - Sensor Code
// Sensors: HC-SR04 (Ultrasonic), Flex, PIR, TMP36

#define TRIG_PIN 9      // HC-SR04 Trigger (usually digital pin)
#define ECHO_PIN 10     // HC-SR04 Echo
#define PIR_PIN 2       // PIR Sensor output (digital)
#define FLEX_PIN A0     // Flex sensor (analog)
#define TEMP_PIN A1     // TMP36 output (analog)

void setup() {
  Serial.begin(9600);           // Start serial for monitoring/data output
  
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(PIR_PIN, INPUT);
}

float readUltrasonicDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  long duration = pulseIn(ECHO_PIN, HIGH, 30000);  // Timeout ~38cm max in Tinkercad
  if (duration == 0) return 999.0;  // No echo → flag as invalid
  
  float distance = duration * 0.034 / 2;  // Distance in cm
  return distance;
}

float readTemperatureC() {
  int raw = analogRead(TEMP_PIN);
  float voltage = raw * (5.0 / 1023.0);
  float temperatureC = (voltage - 0.5) * 100.0;  // TMP36 formula
  return temperatureC;
}

void loop() {
  float distance = readUltrasonicDistance();      // cm (999 if no reading)
  int flexValue = analogRead(FLEX_PIN);           // 0-1023 (higher when bent)
  int pirState = digitalRead(PIR_PIN);            // 0 or 1 (motion detected)
  float temperature = readTemperatureC();         // °C

  // CSV Output: distance, flex, pir, temperature → Easy for Python parsing
  Serial.print(distance, 1);
  Serial.print(",");
  Serial.print(flexValue);
  Serial.print(",");
  Serial.print(pirState);
  Serial.print(",");
  Serial.println(temperature, 1);

  delay(500);  // 2 readings per second – good for real-time dashboard
}
