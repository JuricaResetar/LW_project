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

/* create a new Sprite instance
   8 pixels wide, 4 pixels tall
*/
Sprite fullrow = Sprite(
  8, 1,
  B11111111
);


void setup(){ 
  red.setBrightness(1);
  red.clear();
  green.setBrightness(1);
  green.clear();
  blue.setBrightness(1);
  blue.clear();
}

void loop(){
  
  red.write(0, 0, fullrow);   // Red

  red.setBrightness(11);
  green.setBrightness(3);
  red.write(0, 1, fullrow);   // Yellow
  green.write(0, 1, fullrow);
  
  green.write(0, 2, fullrow); // Green

  green.write(0, 3, fullrow); // Turquoise
  blue.write(0,3, fullrow);

  blue.write(0,4, fullrow);   // Blue

}

