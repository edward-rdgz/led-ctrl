int led1 = 9;
int led2 = 10;
int led3 = 11;
char letter = 'x';
int seconds = 1000;

void setup() { // La rutina de setup corre una vez o cuando se presiona reset.
  pinMode(led1, OUTPUT); // Indica la salida del pin o led 1.
  pinMode(led2, OUTPUT); // Indica la salida del pin o led 2.
  pinMode(led3, OUTPUT); // Indica la salida del pin o led 3.
  digitalWrite(led1, LOW);  //inicializa en apagado el led 1.
  digitalWrite(led2, LOW);  //inicializa en apagado el led 2.
  digitalWrite(led3, LOW);  //inicializa en apagado el led 3.
  Serial.begin(9600); // Sincroniza el serial.
}

void loop() { // La rutina loop corre constantemente.
  if (Serial.available()) { // Comprueba la disponibilidad.
    letter = Serial.read(); // Captura la letra.
    if (letter == 'x') { // Si es x.
      delay(seconds); // Retardo de tiempo.
    }
    if (letter == 'A') { // Si se introduce el comando A.
      digitalWrite(led1, HIGH); // Enciende el led 1. (HIGH es el nivel de voltaje)
      digitalWrite(led2, LOW); // Apaga el led 2.
      digitalWrite(led3, LOW); // Apaga el led 3.
      delay(seconds); // Retardo de tiempo.
    }
    if (letter == 'B') { // Si se introduce el comando B
      digitalWrite(led2, HIGH); // Enciende el led 2. (HIGH es el nivel de voltaje)
      digitalWrite(led1, LOW); // Apaga el led 1.
      digitalWrite(led3, LOW); // Apaga el led 3.
      delay(seconds); // Retardo de tiempo.
    }
    if (letter == 'C') { // Si se introduce el comando C.
      digitalWrite(led3, HIGH); // Enciende el led 3. (HIGH es el nivel de voltaje)
      digitalWrite(led1, LOW); // Apaga el led 1.
      digitalWrite(led2, LOW); // Apaga el led 2.
      delay(seconds); // Retardo de tiempo.
    }
  }
}
