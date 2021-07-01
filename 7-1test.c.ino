void setup() {
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);  
}

void loop() {
  LED(1000);
}


void LED(int n){
  for(int i = 0; i <= n ; i++){
  digitalWrite(13,HIGH);
  delayMicroseconds(i);
  
  digitalWrite(13,LOW);
  delayMicroseconds(n-i);
  }
  for(int i = n; i >= 0 ; i--){
  digitalWrite(13,HIGH);
  delayMicroseconds(i);
  
  digitalWrite(13,LOW);
  delayMicroseconds(n-i);
  }
}