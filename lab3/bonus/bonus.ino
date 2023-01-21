void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 7; i++) {
    pinMode(i, OUTPUT);
  }
  pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  segmentNum((analogRead(A0)/1024.0)*10);
  delay(100);
}

void segmentNum(int n) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(i, HIGH);
  }
  switch (n) {
    case 0:
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(6, LOW);
      break;
    case 1:
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      break;
    case 2:
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);   
      break;
    case 3:
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(5, LOW);
      break;
    case 4:
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      break;
    case 5:
      digitalWrite(0, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      break;
    case 6:
      digitalWrite(0, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      break;
    case 7:
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      break;
    case 8:
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      break;
    case 9:
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
    default:;
  }
}
