int blue = 9; 
int green = 10; 
int red = 11; 
void setup() {
  // put your setup code here, to run once:
pinMode(blue, OUTPUT); 
pinMode(green, OUTPUT); 
pinMode(red, OUTPUT); 

} 

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(blue, 200); 
analogWrite(green, 10); 
analogWrite(red, 140); 
}
