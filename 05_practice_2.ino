void setup() {
  pinMode(7,OUTPUT);
  digitalWrite(7, LOW);
  delay(1000); 
}
void loop(){
  digitalWrite(7, 1);
  delay(100);
  digitalWrite(7, 0);
  delay(100);
  digitalWrite(7, 1);
  delay(100);
  digitalWrite(7, 0);
  delay(100);
  digitalWrite(7, 1);
  delay(100);
  digitalWrite(7, 0);
  delay(100);
  digitalWrite(7, 1);
  delay(100);
  digitalWrite(7, 0);
  delay(100);
  digitalWrite(7, 1);
  delay(100);
  while(1){}
}
