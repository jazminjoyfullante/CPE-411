// Jazmin Joy M. Fullante BSCpE 4A
// CPE 411 Embedded System
// Activity 6 - Embedded Operating System
// Shortest Job First

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
	sjf(); //calling the function for shortest job first
}

void sjf()
{
	int pin[6] = {2, 4, 6, 8, 10, 12};
	int time[6] = {8000, 4000, 6000, 3000, 5000, 7000};
	/*
         * A set of array in sjf function
         * Digital pin 2 has a time delay of 8000 millisecond(s)
         * Digital pin 4 has a time delay of 4000 millisecond(s)
         * Digital pin 6 has a time delay of 6000 millisecond(s)
         * Digital pin 8 has a time delay of 3000 millisecond(s)
         * Digital pin 10 has a time delay of 5000 millisecond(s)
  	 * Digital pin 12 has a time delay of 7000 millisecond(s)
         */
  
	int temp; // Temporary value used in swapping
  
	for (int i = 0; i < 6; i++) {
    		for (int j = 0; j < 6; j++) {
      			if (time[i] < time[j]) {
      			temp = time[i];
        		time[i] = time[j];
        		time[j] = temp;
        
        		temp = pin[i];
        		pin[i] = pin[j];
        		pin[j] = temp;
      		}
    	}
} // After executing this loop, the time and digital pin arrays will be sorted in ascending order
  
	int count = 0; // Used to identify the element of time array
  	while (count != 6) {
  		digitalWrite(pin[count], HIGH); // Turn on the LED by making the voltage HIGH
   		delay(time[count]);
    		digitalWrite(pin[count], LOW); // Turn off the LED by making the voltage LOW
    		count++;
  	} // Executes shortest job first
}
