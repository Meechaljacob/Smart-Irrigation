
# 🌱 Soil Moisture Monitoring System using ESP8266 and Blynk

This project is an **IoT-based Soil Moisture Monitoring System** that automatically detects soil dryness and controls a **water pump** using a **relay module**. The system displays **real-time moisture data** on the **Blynk IoT App**, providing an efficient and sustainable solution for smart irrigation.

---

## 📘 Project Overview
Traditional irrigation systems often waste water due to manual control and poor timing.  
This project automates the watering process by using a **Soil Moisture Sensor** connected to an **ESP8266 NodeMCU**, which communicates with the **Blynk IoT Platform** to provide real-time soil moisture data and remote control capabilities.

---

## 🎯 Objectives
- To monitor soil moisture level in real-time using IoT.
- To automate irrigation using a relay-controlled water pump.
- To notify users through Blynk when soil moisture drops below a threshold.
- To promote water conservation through smart farming practices.

---

## ⚙️ Components Used
| Component | Description |
|------------|-------------|
| **ESP8266 NodeMCU** | Wi-Fi enabled microcontroller for IoT connectivity |
| **Soil Moisture Sensor** | Measures soil humidity in analog values |
| **Relay Module** | Controls the water pump based on soil moisture |
| **Blynk IoT App** | Displays real-time data and sends notifications |
| **Jumper Wires** | For circuit connections |
| **Power Supply (5V)** | Powers NodeMCU and sensors |

---

## 🔌 Circuit Connections
| NodeMCU Pin | Component | Function |
|--------------|------------|-----------|
| A0 | Soil Moisture Sensor | Analog input |
| D1 | Relay Module | Pump control |
| 3.3V / Vin | Sensor VCC | Power supply |
| GND | All components | Common ground |

##  🧭 Circuit Diagram
> 
> <img width="526" height="258" alt="Screenshot 2025-10-20 123729" src="https://github.com/user-attachments/assets/41eb76ca-74c1-44c9-9e6e-8b4bf551f819" />

## 🧠 System Architecture
![WhatsApp Image 2025-10-20 at 12 26 23_6f72e956](https://github.com/user-attachments/assets/da7007bd-45c1-4fe4-9cfc-b70ac4de6422)


## 🎯 Report
[soil moisture pro report - Copy.pdf](https://github.com/user-attachments/files/22997210/soil.moisture.pro.report.-.Copy.pdf)

## ⚙️ Working Video

https://github.com/user-attachments/assets/e7654b69-2ef0-4fba-8f8d-d0989f4967f7

## Conclusion
The Soil Moisture Monitoring System measures soil moisture and automates irrigation using IoT technology. The combination of NodeMCU and Blynk offers a cost-effective and sustainable solution for smart agriculture. The system minimizes water wastage and provides farmers with real-time insights for efficient crop management.
