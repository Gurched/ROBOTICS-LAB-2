int pushButton = 10;    // Set the pin for the pushbutton
// Set colours to pins:
int red = 13;
int green = 12;
int blue = 11;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); // Serial communications
pinMode(pushButton, INPUT_PULLUP); // uses the internal resistor and as an input
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int buttonState = digitalRead(pushButton); 
Serial.print("buttonState");
Serial.print(buttonState);
digitalWrite(red, HIGH);
digitalWrite(green, buttonState);
digitalWrite(blue, !buttonState);
delay(1);
}
