void setup(){
  Serial.begin(9600); 
  // BPS : Bit Per Second
  // Boud Rate : Transfer Speed
}
void loop(){
  Serial.println("ARDUINO #1"); // println l은 소문자 l
  delay(1000); //1000ms = 1 second
}
