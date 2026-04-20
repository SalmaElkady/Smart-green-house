🌱 Smart Irrigation System
📌 Description
A smart Arduino-based irrigation system designed to automate plant watering based on soil moisture levels. The system uses a soil moisture sensor and a water pump to ensure plants receive the right amount of water without manual intervention, improving water efficiency and plant health. It also monitors ambient temperature for environmental awareness.

⚙️ How It Works

The system continuously reads data from the soil moisture sensor.
If the soil is dry, the system automatically turns the pump ON to water the plant.
If the soil is wet, the pump is turned OFF to prevent overwatering.
Temperature readings are displayed for monitoring purposes.

🚀 How to Use

Hardware Setup
Connect the soil moisture sensor to the Arduino.
Connect the DHT11 temperature sensor.
Connect the relay module to control the water pump.
Power the pump using an external power source (through the relay).
Upload the Code
Open Arduino IDE.
Upload the project code to your Arduino board.
Run the System
Open the Serial Monitor to view temperature and soil status.
Place the soil sensor in the plant’s soil.
The system will automatically control watering based on soil condition.
