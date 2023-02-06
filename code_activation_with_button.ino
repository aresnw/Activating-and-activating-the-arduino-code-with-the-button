#include <ezButton.h>

#define LOOP_STATE_STOPPED 0
#define LOOP_STATE_STARTED 1

ezButton button(4);  // create ezButton object that attach to pin 7;
int loopState = LOOP_STATE_STOPPED;

void setup() {
  Serial.begin(9600);
 
  button.setDebounceTime(50); // set debounce time to 50 milliseconds
}

void loop() {
  button.loop(); // MUST call the loop() function first

  if (button.isPressed()) {
    if (loopState == LOOP_STATE_STOPPED)
      loopState = LOOP_STATE_STARTED;
    else // if(loopState == LOOP_STATE_STARTED)
      loopState = LOOP_STATE_STOPPED;
  }

  if (loopState == LOOP_STATE_STARTED) {
    
  }
}
