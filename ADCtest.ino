void setup() {
  Serial.begin(9600);
  analogReadResolution(14);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  int adc_value=analogRead(A0);
  float voltage_value;
  float Vref=3.3;
  voltage_value=adc_value*Vref/16383;
  Serial.print("ADC: ");
  Serial.print(adc_value);
  Serial.print(" | Tensiune: ");
  Serial.print(voltage_value, 6);
  Serial.println(" V");
  delay(100);
}
