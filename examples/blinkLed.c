//---------------- Define Vars ----------------

//---------------- Initialization ----------------
void setup() {
	pinMode(0,OUTPUT); // Initialize pin 0
}

//---------------- Main Function ----------------
void loop() {
	//Turn on the LED
	digitalWrite(0,HIGH); // Set pin 0's output state as HIGH
	delay(1000); // Hold for 1 sec
	
	//Turn off the LED
	digitalWrite(0,LOW); // Set pin 0's output state as LOW
	delay(1000); // Hold for 1 sec
}
