void setup() {
  // put your setup code here, to run once:
  // initialize the serial communication
Serial.begin(9600);
  // set pin 3 as an INPUT_PULLUP
pinMode(3, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  // read the input of pin 3
int pushButton = digitalRead(3);
  // prints "pushButton: "
Serial.print("pushButton: ");
  // prints the value of input 3
Serial.println(pushButton);
}
