/* Testing Python to arduino */

void setup() {
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);  
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0) {
    if(Serial.read() == 's') {
      digitalWrite(13,HIGH);
      delay(1000);
      
      digitalWrite(13, LOW);
      delay(1000);
      
      digitalWrite(13,HIGH);
      delay(1000);
    }
  } else {
      digitalWrite(13,LOW);
  }
}
