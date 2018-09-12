#define led_1 13
#define led_2 12
void setup() {
  pinMode(led_1,OUTPUT);
  pinMode(led_2,OUTPUT);

}

void loop() {
  digitalWrite(led_1,HIGH);
  digitalWrite(led_2,LOW);
  delay(150);
  digitalWrite(led_1,LOW);
  digitalWrite(led_2,HIGH);
  delay(150);

}
