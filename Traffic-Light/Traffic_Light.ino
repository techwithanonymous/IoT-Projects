void setup(){
 pinMode(2,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(6,OUTPUT);
}
void loop(){
 digitalWrite(6,HIGH);
 delay(3000);
 digitalWrite(6,LOW);
 digitalWrite(4,HIGH);
 delay(1000);
 digitalWrite(4,LOW);
 digitalWrite(2,HIGH);
 delay(3000);
 digitalWrite(2,LOW);
}
