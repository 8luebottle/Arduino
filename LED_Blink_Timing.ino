void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // Component : 13 (+) & Ground (-)
  digitalWrite(13, HIGH);
  delay(900); 
  digitalWrite(12, HIGH);
  delay(400); 
  digitalWrite(11, HIGH);
  delay(10);
  
  digitalWrite(13, LOW);
  delay(900);
  digitalWrite(12, LOW);
  delay(400);
  digitalWrite(11, LOW);
  delay(10);
}
