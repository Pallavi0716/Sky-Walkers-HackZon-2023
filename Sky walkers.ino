int en1 = 2, in1 = 3, in2 = 2, in3 = 6, in4 = 5, en2 = 7, FRONT = 4, BACK = 7, RIGHT = 8, LEFT = 9;
void setup() {
  pinMode(FRONT, INPUT);
  pinMode(BACK, INPUT);
  pinMode(LEFT, INPUT);
  pinMode(RIGHT, INPUT);
  pinMode(en1, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(en2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {
  analogWrite(en1, HIGH);
  analogWrite(en2, HIGH);
  if (digitalRead(FRONT) == HIGH) {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    delay(1000);
  }

  else if (digitalRead(BACK) == HIGH) {

    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    delay(1000);
  } else if (digitalRead(RIGHT) == HIGH) {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    delay(1000);
  }

  else if (digitalRead(LEFT) == HIGH) {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    delay(1000);
  } else {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  }
}