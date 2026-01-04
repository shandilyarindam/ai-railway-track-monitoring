# AI-Based Railway Track Tampering Detection

## Project Overview

Railway track safety is critical to prevent accidents caused by tampering, deformation, or unauthorized access.  
This project presents an **AI-powered railway track monitoring system** that uses **IoT sensors, data acquisition, and machine learning** to detect anomalies in railway tracks.

The system uses **Arduino-based sensing**, **hybrid AI detection**, and an **HTML dashboard** to visualize sensor readings and tampering alerts. This allows easy demonstration of track safety monitoring even in a **simulated environment**.

---

## Features

- **Track Monitoring using IoT Sensors**:
  - Ultrasonic sensor (distance / track displacement)
  - Flex sensor (track strain)
  - PIR sensor (human presence)
  - Temperature sensor (track heating)
- **Hybrid AI Anomaly Detection**:
  - **Rule-based checks** for obvious tampering
  - **Machine Learning (Isolation Forest)** for subtle anomalies
- **Simulation-ready Dashboard**:
  - Pre-generated HTML file to visualize sensor readings and alerts
- **Tampering Alerts**:
  - Detects unauthorized access, track deformation, or temperature spikes
- **Easy to Demonstrate** without real-time streaming

---

## How It Works

1. **Sensor Layer**: Arduino collects data from distance, flex, temperature, and PIR sensors.  
2. **Data Layer**: Python scripts read and process serial CSV data.  
3. **AI Layer**: Hybrid detection system:
   - **Rule-Based Detection**: Flags extreme anomalies (flex > 750, PIR motion, sudden distance changes, temperature > 40°C)  
   - **Machine Learning Detection**: Isolation Forest identifies subtle deviations from normal track data.  
4. **Dashboard Layer**: HTML file visualizes historical sensor readings and highlights tampering alerts.

---

## Sample Data Example

| distance (cm) | flex | temperature (°C) | pir |
|---------------|------|----------------|-----|
| 32.1          | 410  | 29.8           | 0   |
| 32.0          | 415  | 29.9           | 0   |
| 20.5          | 890  | 41.2           | 1   |

- **Normal track**: distance 30–35 cm, flex < 600, temperature 28–30°C, pir = 0  
- **Tampering**: sudden displacement, high flex (>750), temperature > 40°C, pir = 1

---

## AI / ML Details

- **Model**: Isolation Forest (unsupervised anomaly detection)  
- **Training**: Uses only normal track data  
- **Detection**: Combines ML predictions with rule-based checks for **robust and explainable alerts**  
- **Simulation Ready**: Works with collected or pre-recorded data to generate dashboard visualizations

---

## Dashboard Details

- **HTML dashboard** visualizes sensor readings and tampering alerts  
- Shows **distance, flex, temperature, and PIR motion** over time  
- Highlights **tampering scenarios** in red for easy understanding  
- Can be opened in any browser for **offline demonstration**

---

## Future Enhancements

- Convert dashboard to real-time web visualization using JavaScript or Flask  
- Cloud integration for centralized railway monitoring (MQTT / Firebase)  
- SMS / Email alert system for remote supervision  
- Advanced anomaly detection using autoencoders for more complex tampering patterns  
- Integration with railway control systems for automated safety interventions

---

## Why This Project Stands Out

- Combines **IoT hardware**, **AI-based anomaly detection**, and **interactive visualization**  
- **Hybrid AI approach** ensures reliable and explainable detection  
- Fully **simulation-ready** with HTML dashboard for demonstration  
- Demonstrates **practical relevance** in railway safety monitoring  

---

## References

1. Isolation Forest – [Scikit-learn Documentation](https://scikit-learn.org/stable/modules/generated/sklearn.ensemble.IsolationForest.html)  
2. TMP36 Temperature Sensor Datasheet – [Analog Devices](https://www.analog.com/en/products/tmp36.html)  
3. Arduino Official Tutorials – [Arduino.cc](https://www.arduino.cc/)  

---

## Authors

**Arindam Shandilya / !ordinary**  
Contact: shandilyarindam@gmail.com  

