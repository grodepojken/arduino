#include <Button.h>
#include <MorsePulseBlinkAndBeep.h>





//Create a butoon object
Button btnSos(2);

//Create a MorsePulseBlinkAndBeep object with pin 13 as led output, pin 10 as beeper output, and morse speed 200
MorsePulseBlinkAndBeep blinkerAndbeeper(13, 10, 200);

String readString;
boolean timeToAskAgain;


void setup()
{
	btnSos.begin();
	
	// Open serial connection at 9600 Bd
  	Serial.begin(9600);
}

void loop()
{
	
	if(timeToAskAgain){
		//Ask user to input text
		Serial.println("Please input your text:");
		
		//Prepare readString with values from keyboard
		getKeyboardInput();

	}
		
	//Start blinking and beeping
	if(btnSos.pressed() && readString!=""){

		//Blink until btnSos is released
		while(!btnSos.released()){		
			blinkerAndbeeper.pulseText(readString);
			readString = "";
			timeToAskAgain = true;
		}
	}
}


void getKeyboardInput(){

	  char incomingByte;
	  while (Serial.available()>0) {	
	    incomingByte = Serial.read();
	    readString += incomingByte;
	  }
}



