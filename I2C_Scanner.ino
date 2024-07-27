#include <Wire.h>

void setup() {
  Serial.begin(115200);
  Wire.begin();
  
  Serial.println("I2C Scanner");
  Serial.println("Scanning...");

  byte count = 0;
  
  for (byte address = 1; address < 127; address++) {
    Wire.beginTransmission(address);
    byte error = Wire.endTransmission();
    
    if (error == 0) {
      Serial.print("Device found at address 0x");
      if (address < 16) {
        Serial.print("0");
      }
      Serial.print(address, HEX);
      Serial.println(" !");
      
      count++;
      delay(10);  // Small delay between scans
    }
  }
  
  if (count == 0) {
    Serial.println("No I2C devices found");
  } else {
    Serial.println("Scan complete");
  }
}

void loop() {
  // Nothing to do here
}
