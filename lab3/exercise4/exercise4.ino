void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 7; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  // 9
  shutdownAll();
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  delay(1500);

  // 8
  shutdownAll();
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  delay(1500);

  // 7
  shutdownAll();
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  delay(1500);

  // 6
  shutdownAll();
  digitalWrite(0, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  delay(1500);

  // 5
  shutdownAll();
  digitalWrite(0, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  delay(1500);

  // 4
  shutdownAll();
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  delay(1500);

  // 3
  shutdownAll();
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  delay(1500);

  // 2
  shutdownAll();
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(1500);

  // 1
  shutdownAll();
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  delay(1500);

  // 0
  shutdownAll();
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  delay(1500);
}

void shutdownAll() {
  for (int i = 0; i < 7; i++) {
    digitalWrite(i, HIGH);
  }
}
