/*
    A
   ---
F |   | B
  | G |
   ---
E |   | C
  |   |
   ---
    D
*/

#define DIGIT_1 2
#define DIGIT_2 3
#define DIGIT_3 4
#define DIGIT_4 5
#define PIN_A 6
#define PIN_B 7
#define PIN_C 8
#define PIN_D 9
#define PIN_E 10
#define PIN_F 11
#define PIN_G 12

void setup() {
  pinMode(DIGIT_1, OUTPUT);
  pinMode(DIGIT_2, OUTPUT);
  pinMode(DIGIT_3, OUTPUT);
  pinMode(DIGIT_4, OUTPUT);
  pinMode(PIN_A, OUTPUT);
  pinMode(PIN_B, OUTPUT);
  pinMode(PIN_C, OUTPUT);
  pinMode(PIN_D, OUTPUT);
  pinMode(PIN_E, OUTPUT);
  pinMode(PIN_F, OUTPUT);
  pinMode(PIN_G, OUTPUT);
}

void digit1() {
  digitalWrite(DIGIT_1, HIGH);
  digitalWrite(DIGIT_2, LOW);
  digitalWrite(DIGIT_3, LOW);
  digitalWrite(DIGIT_4, LOW);
}

void digit2() {
  digitalWrite(DIGIT_1, LOW);
  digitalWrite(DIGIT_2, HIGH);
  digitalWrite(DIGIT_3, LOW);
  digitalWrite(DIGIT_4, LOW);
}

void digit3() {
  digitalWrite(DIGIT_1, LOW);
  digitalWrite(DIGIT_2, LOW);
  digitalWrite(DIGIT_3, HIGH);
  digitalWrite(DIGIT_4, LOW);
}

void digit4() {
  digitalWrite(DIGIT_1, LOW);
  digitalWrite(DIGIT_2, LOW);
  digitalWrite(DIGIT_3, LOW);
  digitalWrite(DIGIT_4, HIGH);
}

void display0() {
  digitalWrite(PIN_A, LOW);
  digitalWrite(PIN_B, LOW);
  digitalWrite(PIN_C, LOW);
  digitalWrite(PIN_D, LOW);
  digitalWrite(PIN_E, LOW);
  digitalWrite(PIN_F, LOW);
  digitalWrite(PIN_G, HIGH);
}

void display1() {
  digitalWrite(PIN_A, HIGH);
  digitalWrite(PIN_B, HIGH);
  digitalWrite(PIN_C, HIGH);
  digitalWrite(PIN_D, HIGH);
  digitalWrite(PIN_E, LOW);
  digitalWrite(PIN_F, LOW);
  digitalWrite(PIN_G, HIGH);
}

void display2() {
  digitalWrite(PIN_A, LOW);
  digitalWrite(PIN_B, LOW);
  digitalWrite(PIN_C, HIGH);
  digitalWrite(PIN_D, LOW);
  digitalWrite(PIN_E, LOW);
  digitalWrite(PIN_F, HIGH);
  digitalWrite(PIN_G, LOW);
}

void display3() {
  digitalWrite(PIN_A, LOW);
  digitalWrite(PIN_B, LOW);
  digitalWrite(PIN_C, LOW);
  digitalWrite(PIN_D, LOW);
  digitalWrite(PIN_E, HIGH);
  digitalWrite(PIN_F, HIGH);
  digitalWrite(PIN_G, LOW);
}

void display4() {
  digitalWrite(PIN_A, HIGH);
  digitalWrite(PIN_B, LOW);
  digitalWrite(PIN_C, LOW);
  digitalWrite(PIN_D, HIGH);
  digitalWrite(PIN_E, HIGH);
  digitalWrite(PIN_F, LOW);
  digitalWrite(PIN_G, LOW);
}

void display5() {
  digitalWrite(PIN_A, LOW);
  digitalWrite(PIN_B, HIGH);
  digitalWrite(PIN_C, LOW);
  digitalWrite(PIN_D, LOW);
  digitalWrite(PIN_E, HIGH);
  digitalWrite(PIN_F, LOW);
  digitalWrite(PIN_G, LOW);
}

void display6() {
  digitalWrite(PIN_A, LOW);
  digitalWrite(PIN_B, HIGH);
  digitalWrite(PIN_C, LOW);
  digitalWrite(PIN_D, LOW);
  digitalWrite(PIN_E, LOW);
  digitalWrite(PIN_F, LOW);
  digitalWrite(PIN_G, LOW);
}

void display7() {
  digitalWrite(PIN_A, LOW);
  digitalWrite(PIN_B, LOW);
  digitalWrite(PIN_C, LOW);
  digitalWrite(PIN_D, HIGH);
  digitalWrite(PIN_E, HIGH);
  digitalWrite(PIN_F, LOW);
  digitalWrite(PIN_G, HIGH);
}

void display8() {
  digitalWrite(PIN_A, LOW);
  digitalWrite(PIN_B, LOW);
  digitalWrite(PIN_C, LOW);
  digitalWrite(PIN_D, LOW);
  digitalWrite(PIN_E, LOW);
  digitalWrite(PIN_F, LOW);
  digitalWrite(PIN_G, LOW);
}

void display9() {
  digitalWrite(PIN_A, LOW);
  digitalWrite(PIN_B, LOW);
  digitalWrite(PIN_C, LOW);
  digitalWrite(PIN_D, LOW);
  digitalWrite(PIN_E, HIGH);
  digitalWrite(PIN_F, LOW);
  digitalWrite(PIN_G, LOW);
}

void displayNumber(unsigned int number) {
  switch (number) {
    case 0:
      display0();
      break;
    case 1:
      display1();
      break;
    case 2:
      display2();
      break;
    case 3:
      display3();
      break;
    case 4:
      display4();
      break;
    case 5:
      display5();
      break;
    case 6:
      display6();
      break;
    case 7:
      display7();
      break;
    case 8:
      display8();
      break;
    case 9:
      display9();
      break;
   }
}

void loop() {
  unsigned long millisSinceStart = millis();
  unsigned int secondsSinceStart = millisSinceStart/1000;

  unsigned int minutesToDisplay = secondsSinceStart/60;
  unsigned int secondsToDisplay = secondsSinceStart-(minutesToDisplay*60);

  unsigned int digit1Number = (minutesToDisplay/10)%10;
  unsigned int digit2Number = minutesToDisplay%10;
  unsigned int digit3Number = (secondsToDisplay/10)%10;
  unsigned int digit4Number = secondsToDisplay%10;

  digit1();
  displayNumber(digit1Number);
  delay(1);

  digit2();
  displayNumber(digit2Number);
  delay(1);

  digit3();
  displayNumber(digit3Number);
  delay(1);

  digit4();
  displayNumber(digit4Number);
  delay(1);
}
