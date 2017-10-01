//---------------- Initialization ----------------
void setup() {
  // put your setup code here, to run once:
	pinMode(0,OUTPUT); // Initialize pin 0
}

//---------------- Main Function ----------------
void loop() {
  // put your main code here, to run repeatedly:
	digitalWrite(0,HIGH); // Set pin 0's output state as HIGH
	delay(1000); // Hold for 1 sec

	digitalWrite(0,LOW); // Set pin 0's output state as LOW
	delay(1000); // Hold for 1 sec
}