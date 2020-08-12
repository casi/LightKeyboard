// pitches library
// outsource the table of scores, for the sake of clarity
#include "pitches.h"

// Assign the respective pins to individual tones
int toneC = 2;
int toneD = 3;
int toneE = 4;
int toneF = 5;
int toneG = 6;

// Setting output on pin 12
int soundOutput = 12;

void setup() {
		pinMode(toneC, INPUT);
		digitalWrite(toneC, HIGH);
		pinMode(toneD, INPUT);
		digitalWrite(toneD, HIGH);
		pinMode(toneE, INPUT);
		digitalWrite(toneE, HIGH);
		pinMode(toneF, INPUT);
		digitalWrite(toneF, HIGH);
		pinMode(toneG, INPUT);
		digitalWrite(toneG, HIGH);
		Serial.begin(9600);
}

// switch on the sound
void soundOn(int tones) {
		tone(soundOutput, tones);
}

// switch off the sound
void soundOff() {
		noTone(soundOutput);
}

// If statements ask the state of the respective button and 
// call the appropriate function on with the sound as a parameter. 
void loop() {
		if (digitalRead(toneC) == LOW) {
				soundOn(NOTE_C6);
		}
		else if (digitalRead(toneD) == LOW) {
				soundOn(NOTE_D6);
		}
		else if (digitalRead(toneE) == LOW) {
				soundOn(NOTE_E6);
		}
		else if (digitalRead(toneF) == LOW) {
				soundOn(NOTE_F6);
		}
		else if (digitalRead(toneG) == LOW) {
				soundOn(NOTE_G6);
		}
		else {
				soundOff();
		}
}
