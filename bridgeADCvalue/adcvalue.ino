#include <Arduino_RouterBridge.h>

// Funcția de citire a pinului analogic
int ADC_read() {
  return analogRead(A0);
}

void setup() {
  Bridge.begin();
  pinMode(A0,INPUT);
  
  // "Expunem" funcția pentru a putea fi văzută de Python.
  // provide_safe rulează funcția în contextul loop-ului principal pentru stabilitate.
  Bridge.provide_safe("adc_value", ADC_read);
}

void loop() {
  // Procesează mesajele și cererile venite dinspre Linux
  Bridge.update();
  delay(10);
}
