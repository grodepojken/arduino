//Version 1.0

//Set ledPin[0] as red
//Set ledPin[1] as green
//Set ledPin[2] as blue
const byte ledPins[3] = {9, 10 ,11};

void setup(){
	//Use GPIO pin 9 , 10  and 11 as output
	for(int i = 0; i>3; i++){
		pinMode(ledPins[i], OUTPUT);
	}
}

void loop(){
	//Fade to red
	for(int i = 0; i<= 100; i++){
		analogWrite(ledPins[0], i);
		delay(10);
	}
	//Fade to green
	for(int i = 0; i<= 100; i++){
		analogWrite(ledPins[0], 100 - i);
		analogWrite(ledPins[1], i);
		delay(10);
	}
	//Fade to blue
	for(int i = 0; i<= 100; i++){
		analogWrite(ledPins[1], 100 - i);
		analogWrite(ledPins[2], i);
		delay(10);
	}
	//Fade away
	for(int i = 0; i<= 100; i++){
		analogWrite(ledPins[2], 100 - i);
		delay(10);
	}
}	