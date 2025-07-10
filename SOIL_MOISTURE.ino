// Define the analog and digital pins connected to the soil moisture sensor
const int soilMoistureAnalogPin = A0;
const int soilMoistureDigitalPin = 2; // Change to your chosen digital pin
const int soilMoistureThreshold = 500;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Read analog value from the soil moisture sensor
  int analogValue = analogRead(soilMoistureAnalogPin);

  // Read digital value from the soil moisture sensor
  int digitalValue = digitalRead(soilMoistureDigitalPin);

  if (analogValue < soilMoistureThreshold) {
    Serial.println("Soil moisture is low!");
  } else {
    Serial.println("Soil moisture is okay.");
  }
  // Print values to the serial monitor
  Serial.print("Analog Value: ");
  Serial.println(analogValue);
  
  Serial.print("Digital Value: ");
  Serial.println(digitalValue);

  // Wait for a short delay before taking the next reading
  delay(1000); // Adjust this delay as needed
}
