void setup() {
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop(){
  LED(1000);
}

void LED(int n){
  for(int i = 0; i < n ; i++){
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    delayMicroseconds(i);
  
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    delayMicroseconds(n-i);
  }
  
  for(int i = n; i > 0 ; i--){
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    delayMicroseconds(i);
  
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    delayMicroseconds(n-i);
  }
}
