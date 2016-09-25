#include <Sprite.h>
#include <Matrix.h>
#include <LW_matrix_defs.h>

/* create a new Matrix instance
   pin 0: data  (din)
   pin 1: clock (clk)
   pin 2: load  (load)
*/
Matrix green = Matrix(GREEN_DATA, CLOCK, GREEN_LOAD);
Matrix red = Matrix(RED_DATA, CLOCK, RED_LOAD);
Matrix blue = Matrix(BLUE_DATA, CLOCK, BLUE_LOAD);

void setup(){

  blue.clear(); // clear display
  red.clear(); // clear display
  green.clear();
}

int pause = 100;

void loop() {

  red.write(1,1,HIGH);
  delay(pause);
  green.write(2,2,LOW);
  delay(pause);
  red.write(1,1,LOW);
  delay(pause);
  green.write(2,2,HIGH);
  delay(pause);
}
