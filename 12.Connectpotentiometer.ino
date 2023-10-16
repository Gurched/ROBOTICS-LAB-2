void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue = analogRead(A0); // Reads the value of voltage
float voltage = sensorValue * (5.0 / 1023.0); // transforms the voltage to a 10 bit
Serial.print("voltage: ");  // prints "voltage: "
Serial.println(voltage);  // prints the voltage transformed to the 10 bit value
}
