# Railway Track Sensor Dataset

## Overview

This dataset simulates sensor readings from a railway track monitoring system.  
It includes normal track conditions and tampering scenarios for AI model development and testing.

## Columns

| Column       | Type   | Description |
|--------------|--------|-------------|
| distance     | float  | Ultrasonic sensor reading (cm), measures track displacement |
| flex         | int    | Flex sensor value (0–1023), indicates track strain/bending |
| temperature  | float  | TMP36 temperature sensor (°C), detects abnormal heating |
| pir          | int    | PIR sensor (0 or 1), detects human presence near the track |

## Normal Track Conditions

- distance: 30–35 cm
- flex: 400–450
- temperature: 28–30°C
- pir: 0

## Tampering / Anomaly Indicators

- Sudden distance drop or spike (e.g., <25 cm)
- Flex sensor value > 750 (track bending / forced tampering)
- Temperature spike > 40°C (welding / heating activity)
- PIR motion detected (pir = 1)

## Usage

- Use rows 1–10 for **normal behavior training** for ML model (Isolation Forest)
- Rows 11–13 are **tampering scenarios** for testing detection
- Rows 14–17 confirm model correctly identifies return to normal
