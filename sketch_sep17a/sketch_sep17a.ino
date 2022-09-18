#define LED_1 5
#define LED_2 18
#define LED_3 21

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
}

void loop() {
  digitalWrite(LED_1, HIGH);
  delay(100);
  digitalWrite(LED_1, LOW);
  delay(100);
  digitalWrite(LED_2, HIGH);
  delay(100);
  digitalWrite(LED_2, LOW);
  delay(100);
   digitalWrite(LED_3, HIGH);
  delay(100);
  digitalWrite(LED_3, LOW);
  delay(100);
}