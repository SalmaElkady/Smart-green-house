#  Smart Irrigation System using Arduino

##  Description

A smart irrigation system based on Arduino, designed to automate plant watering based on soil moisture levels.
The system uses a **soil moisture sensor** and a **water pump** to ensure plants receive the appropriate amount of water without manual intervention.

---

##  How It Works

* The system continuously reads data from the soil moisture sensor.
* If the soil is **dry** → the pump turns **ON**.
* If the soil is **wet** → the pump turns **OFF**.
* Temperature readings are also displayed for monitoring using the **DHT11 sensor**.

---

##  Hardware Setup

1. Connect the **Soil Moisture Sensor** to the Arduino board.
2. Connect the **DHT11 Temperature Sensor**.
3. Connect the **Relay Module** to control the water pump.
4. Power the **Water Pump** using an external power source via the relay.

---

##  Upload the Code

1. Open **Arduino IDE**.
2. Upload the project code to your Arduino board.

---

## Run the System

1. Open the **Serial Monitor** to view temperature and soil status.
2. Place the soil moisture sensor into the plant soil.
3. The system will automatically control watering based on soil condition.

---

##  Requirements

###  Hardware Components

* Arduino Board (e.g., Arduino Uno)
* Soil Moisture Sensor
* DHT11 Temperature Sensor
* Relay Module (Active LOW)
* Water Pump
* Jumper Wires
* External Power Supply (for the pump)

---

##  Installation Instructions

1. Open **Arduino IDE**.
2. Go to **Library Manager**.
3. Install the following libraries:

   * **DHT sensor library by Adafruit**
   * **Adafruit Unified Sensor Library**





