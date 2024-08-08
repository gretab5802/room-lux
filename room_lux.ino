#include "Adafruit_VEML7700.h"
#include <SPI.h>
#include <SD.h>

char filename[ ] = "roomlux.txt";
File myFile;
float lux;
int successfulStartup = 0;
int sensorPin = 0;
int analogPin = A0;
float aRead;

Adafruit_VEML7700 veml = Adafruit_VEML7700();

void setup() {
  Serial.begin(9600);
  Serial.println("Adafruit VEML7700 Test Starting Up...");
  Serial.print("Initializing SD card...");
  if (!SD.begin(4)) {
    Serial.println("SD initialization failed!");
    while (1); // This line freezes the Nano until its rebooted.
  }
  Serial.println("SD initialization done.");

   myFile = SD.open(filename, FILE_WRITE);  // open SD card file for writing

  if (myFile) {
    // open file if found or create a new file if it doesnt exist
    // file name cannot be longer than eight characters
    Serial.print("Writing...");
    Serial.println(filename);
    Serial.println("Lux");
    myFile.println("Lux");
    myFile.close();
  } else {
      // if the file didn't open, print an error:
      Serial.println("error opening");
      Serial.print(filename);
  }
  
  successfulStartup = veml.begin();  //returns "1" if successful
  
  if (successfulStartup == 1) {  // The following will print some useful debugging messages
    Serial.println("Lux Sensor found"); 
  } else {
    Serial.println("Lux Sensor not found");  // if the sensor is probably not wired correctly
    while (1);
  }

  veml.setGain(VEML7700_GAIN_1_8); // set gain of lux sensor to 1/8
  veml.setIntegrationTime(VEML7700_IT_100MS); // set integration time to 100 milliseconds
  
  Serial.println("...Lux Startup Complete!");


}

void loop() {
  lux = veml.readLux(); // read lux and print it to the serial monitor
  Serial.println(lux);

  myFile = SD.open(filename, FILE_WRITE); // open SD card file for writing
  
  if (myFile) {
    myFile.println(lux); // print lux to file
    myFile.close();
  }
  else {
  // if file doesn't open, print error
    Serial.println("error opening");
    Serial.print(filename);
  }
  delay(1000); // delay reading for 1 second
}
