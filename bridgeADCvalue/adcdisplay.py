from arduino.app_utils import Bridge
import time

# Conectarea la Bridge-ul intern
bridge = Bridge()

print("Citim valoarea de la A0. Apasă Ctrl+C pentru oprire.")

try:
    while True:
        # Apelăm funcția C++ exact pe numele cu care a fost expusă
        adc = int(bridge.call("adc_value"))
        voltage_value=adc*3.3/1023
        
        print(f"ADC: {adc} | Tensiune: {voltage_value:.3f} V")
        time.sleep(0.1) # Ritm de 10 citiri pe secundă
        
except KeyboardInterrupt:
    print("Program oprit.")
