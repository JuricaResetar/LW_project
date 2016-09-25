#include <Sprite.h>
#include <Matrix.h>
#include <LW_matrix_defs.h>

#define brightness_red 10
#define brightness_blue 10



/* create a new Matrix instance
   pin 0: data  (din)
   pin 1: clock (clk)
   pin 2: load  (load)
*/
Matrix green = Matrix(GREEN_DATA, CLOCK, GREEN_LOAD);
Matrix red = Matrix(RED_DATA, CLOCK, RED_LOAD);
Matrix blue = Matrix(BLUE_DATA, CLOCK, BLUE_LOAD);

void setup(){  
  red.setBrightness(brightness_red);
  red.clear(); // clear display
  blue.setBrightness(brightness_blue);
  blue.clear(); // clear display
  green.clear(); // clear display
}


void drawHeart(int brightness){
  red.setBrightness(brightness);
  red.write(6,1,HIGH);
  red.write(5,1,HIGH);
  red.write(4,2,HIGH);
  red.write(3,2,HIGH);
  red.write(2,1,HIGH);
  red.write(1,1,HIGH);
  red.write(0,2,HIGH);
  red.write(0,3,HIGH);
  red.write(0,4,HIGH);
  red.write(1,5,HIGH);
  red.write(2,6,HIGH);
  red.write(3,7,HIGH);
  red.write(4,7,HIGH);
  red.write(5,6,HIGH);
  red.write(6,5,HIGH);
  red.write(7,4,HIGH);
  red.write(7,3,HIGH);
  red.write(7,2,HIGH);
  
  blue.setBrightness(brightness);
  blue.write(7,5,HIGH);
  blue.write(0,5,HIGH);
  
  blue.write(7,6,HIGH);
  blue.write(6,6,HIGH);
  blue.write(1,6,HIGH);
  blue.write(0,6,HIGH);
  
  blue.write(7,7,HIGH);
  blue.write(6,7,HIGH);
  blue.write(5,7,HIGH);
  blue.write(2,7,HIGH);
  blue.write(1,7,HIGH);
  blue.write(0,7,HIGH);

  blue.write(7,0,HIGH);
  blue.write(6,0,HIGH);
  blue.write(5,0,HIGH);
  blue.write(4,0,HIGH);
  blue.write(3,0,HIGH);
  blue.write(2,0,HIGH);
  blue.write(1,0,HIGH);
  blue.write(0,0,HIGH);
  blue.write(7,1,HIGH);
  blue.write(4,1,HIGH);
 
  blue.write(3,1,HIGH);
  blue.write(0,1,HIGH);
}

void loop(){ 
  int i=0;
  int pause = 10;

  for(i=1;i<16;i++){   
    drawHeart(i);
    delay(pause);
  }
  for(i=15;i>0;i--){    
    drawHeart(i);
    delay(pause);
  }
}

