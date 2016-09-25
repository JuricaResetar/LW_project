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
  red.setBrightness(15);
  red.clear();
  green.setBrightness(15);
  green.clear();
  blue.setBrightness(15);
  blue.clear();
}

int x = 0;

void loop(){
  int i,j;

  for(i=0; i<8; i++){
    for(j=0; j<8; j++){
      blue.write(i, j, HIGH);
      green.write(i, j, HIGH);     
      red.write(i, j, HIGH);   
    }
  }
}

