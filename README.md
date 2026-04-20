Smart Irrigation System DescriptionA smart irrigation system based on Arduino, designed to automate plant watering based on soil moisture levels. The system utilizes a soil moisture sensor and a water pump to ensure that plants receive the appropriate amount of water without manual intervention.How It WorksThe system continuously reads data from the soil moisture sensor. If the soil is dry, the system automatically turns the pump ON to water the plants. Conversely, if the soil is wet, the pump is turned OFF to prevent overwatering. Temperature readings are displayed for monitoring purposes.How to Use Hardware Setup
Connect the soil moisture sensor to the Arduino board.
Connect the DHT11 temperature sensor.
Connect the relay module to control the water pump.
Power the pump using an external power source through the relay.
 Upload the Code
Open the Arduino IDE.
Upload the project code to your Arduino board.
 Run the System
Open the Serial Monitor to view temperature and soil status.
Place the soil sensor in the plant’s soil.
The system will automatically control watering based on the soil condition.
Requirements Hardware Components
Arduino Board (e.g., Arduino Uno)
Soil Moisture Sensor
DHT11 Temperature Sensor
Relay Module (Active LOW)
Water Pump
Jumper Wires
External Power Supply (for the pump)
Installation Instructions
Open the Arduino IDE.
Go to the Library Manager.
Install:

DHT sensor library by Adafruit.
Adafruit Unified Sensor Library.


Notes
Ensure the relay type (Active LOW / Active HIGH) matches your code.
The pump must NOT be powered directly from the Arduino.
Ensure proper wiring to avoid damaging components.
