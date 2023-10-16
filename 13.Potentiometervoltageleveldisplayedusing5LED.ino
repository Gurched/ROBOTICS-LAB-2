// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);  
  pinMode(11, OUTPUT);  
  pinMode(10, OUTPUT);  
  pinMode(9, OUTPUT);  
  }

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  // print out the value you read:
  Serial.println(voltage);
  // Red LED turn on if the value of voltage is = to 1 or greater than 1
  if ( voltage >=1 ){
    digitalWrite(13, HIGH);
  } else { // if not, it will stay off
      digitalWrite(13, LOW);
 }
 // Green LED turn on if the value of voltage is = to 2 or greater than 2
   if ( voltage >=2 ){
    digitalWrite(12, HIGH);
  } else { // if not, it will stay off
      digitalWrite(12, LOW);
 }
 // Blue LED turn on if the value of voltage is = to 3 or greater than 3
    if ( voltage >=3 ){
    digitalWrite(11, HIGH);
  } else { // if not, it will stay off
      digitalWrite(11, LOW);
 }
 // White LED turn on if the value of voltage is = to 4 or greater than 4
    if ( voltage >=4 ){
    digitalWrite(10, HIGH);
  } else { // if not, it will stay off
      digitalWrite(10, LOW);
 }
 // Yellow LED turn on if the value of voltage is = to 5 or greater than 5
    if ( voltage >=5 ){
    digitalWrite(9, HIGH);
  } else { // if not, it will stay off
      digitalWrite(9, LOW);
 }
}
