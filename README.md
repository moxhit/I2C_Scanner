# I2C Scanner

This repository contains an Arduino sketch for scanning I2C devices connected to an Arduino board. The sketch scans for devices on the I2C bus and prints their addresses to the Serial Monitor.

## Requirements

- Arduino board (e.g., Uno, Nano, Mega, etc.)
- Arduino IDE installed on your computer
- One or more I2C devices connected to the Arduino

## Installation

1. Clone this repository or download the ZIP file and extract it.
2. Open the Arduino IDE.
3. Load the `I2C_Scanner.ino` file from the extracted repository.

## Usage

1. Connect your I2C devices to the Arduino. Make sure the SDA and SCL lines are connected properly.
2. Connect the Arduino to your computer via USB.
3. Upload the sketch to the Arduino using the Arduino IDE.
4. Open the Serial Monitor (Tools > Serial Monitor) in the Arduino IDE.
5. Set the baud rate in the Serial Monitor to `115200`.
6. The Serial Monitor will display the addresses of any detected I2C devices.

## How It Works

The sketch initializes the I2C bus and scans all possible I2C addresses (from 1 to 126). For each address, it attempts to communicate with a device. If the communication is successful, it prints the device address to the Serial Monitor.

## Troubleshooting

- If no devices are found, check your wiring and ensure that the SDA and SCL lines are connected to the correct pins.
- Make sure the I2C devices are powered on.
- Verify the baud rate in the Serial Monitor matches the baud rate specified in the sketch (`115200`).

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contributing

Contributions are welcome! Please fork this repository and submit a pull request with your improvements.
