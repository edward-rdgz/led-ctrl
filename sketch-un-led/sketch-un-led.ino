int led = 13; // Pin 13 tiene un LED conectado.
float seconds = 1000; // Asigna el tiempo de retardo de encendido. --> Asignar 50 es hiper rapido.

void setup() { // La rutina de setup corre una vez o cuando se presioa reset.
  pinMode(led, OUTPUT); // Inicializa el pin 13 como pin de salida.
}

void loop() { // La rutina loop corre constantemente.
  digitalWrite(led, HIGH); // Enciende el led. (HIGH es el nivel de voltaje)
  delay(seconds); // Espera un segundo.
  digitalWrite(led, LOW); // Apaga el led.
  delay(seconds); // Espera por un segundo.
}
