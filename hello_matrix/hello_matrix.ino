#include <Matrix.h>
#include <Sprite.h>
#include <LW_matrix_defs.h>

#define size_x 8
#define size_y 8
#define highest_digit 7
#define brightness_red 1
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

  green.clear();
  blue.setBrightness(brightness_blue);
  blue.clear(); // clear display
  red.setBrightness(brightness_red);
  red.clear(); // clear display
  
  
}

int pause_red = 50;
int pause_blue = 50;
  
void loop(){
  
  int i,j;

  for(i=highest_digit; i>(highest_digit-size_x); i--){
    for(j=0; j<size_x; j++){
      green.write(i,j, HIGH);    
      delay(pause_blue);
      green.write(i,j, LOW);
    }
  }
  green.clear();

  /*
  for(i=highest_digit-size_x+1; i<=highest_digit; i++){
    for(j=size_x-1; j>=0; j--){
      red.write(i,j, HIGH);    
      delay(pause_red);
    }
  }
  red.clear();
  */
  
  

}


