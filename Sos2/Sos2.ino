#include <Button.h>
#include <MorsePulse.h>



//Create a butoon object
Button btnSos(2);

//Create a MorsePulse object with ledPin 13 and morse speed 200
MorsePulse blinker(13, 200);


void setup()
{
	btnSos.begin();
}

void loop()
{
	//Start blinking
	if(btnSos.pressed()){

		//Blink until btnSos is released
		while(!btnSos.released()){
			blinker.pulseText("sos");
		}
	}
}

