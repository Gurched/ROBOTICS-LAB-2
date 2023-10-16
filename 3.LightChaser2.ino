int time = 1000; // make a delay of 1 second
void setup() {
  // put your setup code here, to run once:
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // turn on RED
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);  
  delay(time);                // wait 1 second
  // turn off Red and on Green
  digitalWrite(13, LOW);  
  digitalWrite(12, HIGH);
  delay(time);                // wait 1 second
  // turn off Green and on Blue
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(time);                // wait 1 second
  // turn off Blue and on Yellow
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  delay(time);                // wait 1 second
  // turn off Yellow and on Blue
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  delay(time);                // wait 1 second
  // turn off Blue and on Green
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(time);                // wait 1 second
}
