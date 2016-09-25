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
Sprite wave = Sprite(
  8, 4,
  B00011000,
  B00100100,
  B01000010,
  B10000001
);


void setup(){ 
  red.setBrightness(1);
  red.clear();
  green.setBrightness(1);
  green.clear();
  blue.setBrightness(1);
  blue.clear();
}

int x = 0;

void loop(){
  
  blue.write(x, 1, wave);
  green.write(x, 2, wave);     // place sprite on screen
  red.write(x, 3, wave);

  blue.write(x - 8, 1, wave);
  green.write(x - 8, 2, wave); // place sprite again, elsewhere on screen
  red.write(x - 8, 3, wave);
  
  delay(75);                      // wait a little bit
  red.clear_buffer();
  green.clear_buffer();
  blue.clear_buffer();
  if(x == 8)                      // if reached end of animation sequence
  {
    x = 0;                        // start from beginning
  }
  x++;                            // advance x coordinate to the right
}

