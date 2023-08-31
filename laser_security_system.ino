void setup(){
  pinMode(2,INPUT_PULLUP);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int m = digitalRead(2);
  Serial.println(m);
  delay(100);
  if(m==1){
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(6, HIGH);
    delay(500);
  }
  else{
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(6, LOW);
    delay(500);
  }
}