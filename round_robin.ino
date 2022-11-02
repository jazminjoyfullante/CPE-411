// Jazmin Joy M. Fullante BSCpE 4A
// CPE 411 Embedded System
// Activity 6 - Embedded Operating System
// Round Robin

int led1 = 2;  // The color RED is the LED 1
int led2 = 4;  // The color ORANGE is the LED 2
int led3 = 6;  // The color YELLOW is the LED 3
int led4 = 8;  // The color GREEN is the LED 4
int led5 = 10; // The color BLUE is the LED 5
int led6 = 12; // The color WHITE is the LED 6

void setup() {
        /*
    	 * Set the digital pins 2, 4, 6, 8, 10, and 12 as OUTPUT,
   	 * so a high power level can be outputed to the
   	 * respective pins.
   	 */
	pinMode(2, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(6, OUTPUT);
	pinMode(8, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(12, OUTPUT);
}

void loop() {
	for (int i = 2; i <= 12; i++) { // This For loop will count from 2 to 12 to turn ON and OFF every single digital pin
    		digitalWrite(i, HIGH); // Turn on the LED  by making the voltage HIGH 
    		delay(1000); // Wait for 1000 millisecond(s)
  	}
 
  	for (int i = 12; i >= 2; i--) { // While this For loop will count from 12 to 2 to turn ON and OFF every single digital pin
    		digitalWrite(i, HIGH); // Turn on the LED  by making the voltage HIGH  
    		delay(500); // Wait for 500 millisecond(s)
    		digitalWrite(i, LOW); // Turn off the LED  by making the voltage HIGH 
    		delay(500); // Wait for 500 millisecond(s before running the 2nd cycle of FOR loop
    	}
}
