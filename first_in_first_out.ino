// Jazmin Joy M. Fullante BSCpE 4A
// CPE 411 Embedded System
// Activity 6 - Embedded Operating System
// First In First Out

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

void loop () {
	digitalWrite (2, HIGH); // Digital pin 2 turns on LED 1 by making the voltage HIGH
	delay (10000); // Wait for 10000 millisecond(s) 
	digitalWrite (2, LOW); // Turn the LED off by making the voltage LOW  
  
	digitalWrite (4, HIGH); // Digital pin 4 turns on LED 2 by making the voltage HIGH
	delay (5000); // Wait for 5000 millisecond(s) 
	digitalWrite (4, LOW); // Turn the LED off by making the voltage LOW  
  
	digitalWrite (6, HIGH); // Digital pin 6 turns on LED 3 by making the voltage HIGH
	delay (8000); // Wait for 8000 millisecond(s) 
	digitalWrite (6, LOW); // Turn the LED off by making the voltage LOW  
  
	digitalWrite (8, HIGH); // Digital pin 8 turns on LED 4 by making the voltage HIGH
	delay (3000); // Wait for 3000 millisecond(s) 
	digitalWrite (8, LOW); // Turn the LED off by making the voltage LOW  
  
	digitalWrite (10, HIGH); // Digital pin 10 turns on LED 5 by making the voltage HIGH
	delay (1000); // Wait for 1000 millisecond(s)
	digitalWrite (10, LOW); // Turn the LED off by making the voltage LOW  
  
	digitalWrite (12, HIGH); // Digital pin 12 turns on LED 6 by making the voltage HIGH
	delay (2000); // Wait for 2000 millisecond(s)
	digitalWrite (12, LOW); // Turn the LED off by making the voltage LOW 
}
