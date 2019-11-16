#include "pitches.h"
#include "buzzer.h"
#define PIN_BUZZER 6
Buzzer buzzer(PIN_BUZZER);

int notes[] = {NOTE_A4, NOTE_SILENCE, NOTE_G4, NOTE_SILENCE};
double durations[] = {8, 1, 4, 1};
int melodyLength = 4;

void setup() {

    Serial.begin(115200);

}

void loop() {
  if (Serial.available()) {
        int incomingNote = Serial.parseInt();
        Serial.println(incomingNote);
        buzzer.playNote(incomingNote);
  }

}
