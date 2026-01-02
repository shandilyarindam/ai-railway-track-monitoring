# AI-Based Railway Track Monitoring 🚆🔍

This project presents an AI-powered system to monitor **railway tracks** for tampering or anomalies using IoT sensors, real-time data acquisition, and machine learning.

## 🔧 Hardware (Simulated in Tinkercad)
- Arduino Uno
- Ultrasonic Sensor (HC-SR04)
- Flex Sensor (Track Strain)
- PIR Sensor (Human Presence)
- TMP36 Temperature Sensor

## 🧠 System Architecture
Sensors → Arduino → Serial Data → AI Detection Algorithm → Dashboard & Alerts

## 🤖 AI Approach
- Feature extraction from sensor streams
- Rule-based + ML anomaly detection
- Real-time classification: Normal vs Tampering

## 📊 Dashboard
Streamlit dashboard visualizes sensor readings and highlights tampering alerts in real time.

## 🚀 How to Run
1. Upload Arduino code to simulation
2. Run AI ingestion script:
   ```bash
   python ai/data_ingestion.py
