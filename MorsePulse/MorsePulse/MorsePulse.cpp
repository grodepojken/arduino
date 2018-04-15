#include "Arduino.h"
#include "MorePulse.h"

MorsePulse::MorsePulse(byte ledPin, unsigned long morseSpeed){
	//Use ledPin as output.
	pinMode(ledPin, OUTPUT);

	_ledPin = ledPin;
	_morseSpeed = morseSpeed;
}

void MorsePulse::shortPulse(byte pulses) {
	//Create requested number of short pulses
	for(int i = 0; i < pulses; i++){
		digitalWrite(_ledPin, HIGH);
		delay(_morseSpeed);
		digitalWrite(_ledPin, LOW);
		delay(_morseSpeed);
	}
}

void MorsePulse::longPulse(byte pulses) {
	//Create requested number of short pulses
	for(int i = 0; i < pulses; i++){
		digitalWrite(_ledPin, HIGH);
		delay(_morseSpeed*3);
		digitalWrite(_ledPin, LOW);
		delay(_morseSpeed);
	}
}

void MorsePulse::nextLetter(){
	delay(_morseSpeed * 3);
}

void MorsePulse::nextWord(){
	delay(_morseSpeed * 6);
}

void MorsePulse::pulseLetter(char character){
	//Convert characters to Morse code
	switch(character) {
		case 'a': shortPulse(1); longPulse(1); nextLetter();
		break;
		case 'b': longPulse(1); shortPulse(3); nextLetter();
		break;
		case 'c': longPulse(1); shortPulse(1) longPulse(1); shortPulse(1) nextLetter();
		break;
		case 'd': longPulse(1); shortPulse(2); nextLetter();
		break;
		case 'e': shortPulse(1); nextLetter();
		break;
		case 'f': shortPulse(2); longPulse(1); shortPulse(1); nextLetter();
		break;
		case 'g': longPulse(2); shortPulse(1); nextLetter();
		break;
		case 'h': shortPulse(4); nextLetter();
		break;
		case 'i': shortPulse(1); longPulse(1); nextLetter();
		break;
		case 'j': shortPulse(2); nextLetter();
		break;
		case 'k': longPulse(1); shortPulse(1); longPulse(1); nextLetter();
		break;
		case 'l': shortPulse(1); longPulse(3); shortPulse(2) nextLetter();
		break;
		case 'm': longPulse(2); nextLetter();
		break;
		case 'n': longPulse(1); shortPulse(1); nextLetter();
		break;
		case 'o': longPulse(3); nextLetter();
		break;
		case 'p': longPulse(1); shortPulse(3); nextLetter();
		break;
		case 'q': shortPulse(1); longPulse(1); nextLetter();
		break;
		case 'r': longPulse(1); shortPulse(3); nextLetter();
		break;
		case 's': shortPulse(1); longPulse(1); nextLetter();
		break;
		case 't': longPulse(1); shortPulse(3); nextLetter();
		break;
		case 'u': shortPulse(1); longPulse(1); nextLetter();
		break;
		case 'v': longPulse(1); shortPulse(3); nextLetter();
		break;
		case 'w': shortPulse(1); longPulse(1); nextLetter();
		break;
		case 'x': longPulse(1); shortPulse(3); nextLetter();
		break;
		case 'y': shortPulse(1); longPulse(1); nextLetter();
		break;
		case 'z': longPulse(1); shortPulse(3); nextLetter();
		break;
	}
}