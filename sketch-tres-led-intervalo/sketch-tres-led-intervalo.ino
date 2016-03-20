int led1 = 9;
int led2 = 10;
int led3 = 11;
int seconds = 1000;
char letter = 'x';

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  statusLed(LOW);
  Serial.begin(9600);
}

void loop() {
  switch(letter = Serial.read()) {
    case 'D': // Apaga
      statusLed(LOW);
    break;
    case 'E': // Enciende
      statusLed(HIGH);
    break;
    case 'F': // Primero apagado, segundo encendido, tercero parpadea tres veces y luego se apaga.
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      int i = 0;
      while(i <= 2) {
        digitalWrite(led3, LOW);
        delay(seconds * 2);
        digitalWrite(led3, HIGH);
        delay(seconds * 2);
        i++;
      }
      statusLed(LOW);
    break;
  }
}

void statusLed(int status) { // Asigna el estado del led ya sea encendido o apagado
  digitalWrite(led1, status);
  digitalWrite(led2, status);
  digitalWrite(led3, status);
}
