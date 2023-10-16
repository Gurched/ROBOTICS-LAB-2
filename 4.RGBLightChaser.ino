int time (1000);
// the setup function runs once when you press reset or power the board
void setup() {
  // set pins to output
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the Red LED on 
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(time);                   // wait for a second
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);   // turn the Green LED on 
  delay(time);                    // wait for a second
  digitalWrite(12,LOW);
  digitalWrite(11, HIGH);   // turn the Blue LED on 
  delay(time);                    // wait for a second
  digitalWrite(13, HIGH);  
  digitalWrite(12, HIGH);   // turn all the LED on to make white
  digitalWrite(11, HIGH);
  delay(time);                    // wait for a second
}
