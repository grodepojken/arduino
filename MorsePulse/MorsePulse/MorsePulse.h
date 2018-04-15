#ifndef MorsePulse_h
#define MorsePulse_h

#include "Arduino.h"

class MorsePulse {
	public:
		MorsePulse(byte ledPin, unsigned long morseSpeed);

	private:
		byte _ledPin;
		unsigned long _morseSpeed;
};

#endif