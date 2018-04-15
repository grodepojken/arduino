#ifndef MorsePulseBlinkAndBeep_h
#define MorsePulseBlinkAndBeep_h

#include "Arduino.h"

class MorsePulseBlinkAndBeep {
	public:
		MorsePulseBlinkAndBeep(byte ledPin, byte beepPin, long morseSpeed);
		void pulseLetter(char character);
		void pulseText(String text);

	private:
		byte _ledPin;
		byte _beepPin;
		long _morseSpeed;
		void shortPulse(byte pulses);
		void longPulse(byte pulses);
		void nextWord();
		void nextLetter();

};

#endif