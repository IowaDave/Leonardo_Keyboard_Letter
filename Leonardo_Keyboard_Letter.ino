// import the Keyboard library
#include <Keyboard.h>

// import the letter library
#include "letter.h"


void setup() {

  // wait ten seconds while user prepares a text window
  // to receive the output
  // but give an indication of progress

  pinMode(13, OUTPUT);

  // first, blink at 1-second intervals for 8 seconds
  for (int i = 0; i < 4; i++) {
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
  }

  // then blink at 0.1 second intervals for 2 seconds
  for (int i = 0; i < 10; i++) {
    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(13, LOW);
    delay(100);
  }

  // now send the letter

  Keyboard.begin();

  // the following loop uses resources
  // imported from the letter library
  
  while ( nextLineAvailable() ) {
    Keyboard.println(lineOfText);
  }

 Keyboard.end();

}

void loop() {
  // put your main code here, to run repeatedly:

}
