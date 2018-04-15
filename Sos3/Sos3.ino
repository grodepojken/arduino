//Include libraries






//Create a butoon object
Button btnSos(2);

//Create a MorsePulse object with pin 13 (ledPin) as output, and morse speed 200
MorsePulse blinker(13, 200);

//Create a MorsePulse object with pin 10 as output, and morse speed 200
MorsePulse beeper(10,200);


void setup()
{
	btnSos.begin();
}

void loop()
{
	//Start blinking and beeping
	if(btnSos.pressed()){

		//Blink until btnSos is released
		while(!btnSos.released()){
			blinker.pulseText("sos");
			beeper.pulseText("sos");
		}
	}
}

