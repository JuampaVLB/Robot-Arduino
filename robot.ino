int motorA1 = 2;
int motorA2 = 4;
int motorR1 = 3;
int motorR2 = 5;
char c;

void adelante();
void reversa();
void parado();
void derecha();
void izquierda();
// void encerderluz();
// void apagarluz();


void setup() {
  Serial.begin(9600);

  //pinMode(led, OUTPUT);
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorR1, OUTPUT);
  pinMode(motorR2, OUTPUT);
 // pinMode(luz, OUTPUT);
}

void loop() {
  
  while(Serial.available()) {
    if  (Serial.available() > 0) {
     
      c = Serial.read();

    }
  }

  switch(c) {
    case 'A': 
    adelante();
    break;

    case 'T': 
    reversa();
    break;

    case 'P': 
    parado();
    break;

    case 'I': 
    izquierda();
    break;

    case 'D': 
    derecha();
    break;
  }
}

void adelante() {
  digitalWrite(motorA1, HIGH);
  digitalWrite(motorA2, HIGH);
  //digitalWrite(led, HIGH);
}

void reversa() {
  digitalWrite(motorR2, HIGH);
  digitalWrite(motorR1, HIGH);
  //digitalWrite(led, HIGH);
}

void parado() {
  digitalWrite(motorR1, LOW);
  digitalWrite(motorR2, LOW);
  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, LOW);
 // digitalWrite(led, LOW);
}

void parado2() {
  digitalWrite(motorR1, LOW);
  digitalWrite(motorR2, LOW);
  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, LOW);
 // digitalWrite(led, LOW);
}

void izquierda() {
  digitalWrite(motorA1, HIGH);
  digitalWrite(motorR2, HIGH);
 // digitalWrite(led, HIGH);
}

void derecha() {
  digitalWrite(motorA2, HIGH);
  digitalWrite(motorR1, HIGH);
 // digitalWrite(led, HIGH);
}

// void encenderLuz() {
//   digitalWrite(luz, HIGH);
// }

// void apagarLuz() {
//   digitalWrite(luz, LOW);
// }
