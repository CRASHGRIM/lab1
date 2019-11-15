#include "pitches.h"
#include "buzzer.h"
#define PIN_BUZZER 6
Buzzer buzzer(PIN_BUZZER);
void setup() {
    buzzer.setMelody(notes, durations, melodyLength);
    buzzer.turnSoundOn();
    Serial.begin(115200);
    Serial.println("Started!");
}

void loop() {
  
    buzzer.playSound();
}

void print_rgb(colorData rgb)
{
  Serial.print(rgb.value[TCS230_RGB_R]);
  Serial.print(" ");
  Serial.print(rgb.value[TCS230_RGB_G]);
  Serial.print(" ");
  Serial.print(rgb.value[TCS230_RGB_B]);
  Serial.println();
}

void set_rgb_led(colorData rgb)
{
    analogWrite(R_OUT, 255 - rgb.value[TCS230_RGB_R]);
    analogWrite(G_OUT, 255 - rgb.value[TCS230_RGB_G]);
    analogWrite(B_OUT, 255 - rgb.value[TCS230_RGB_B]);
}
