#include <Sprite.h>
#include <Matrix.h>
#include <LW_matrix_defs.h>

#define size_x 3
#define size_y 3
#define highest_digit 7
#define brightness_red 1
#define brightness_blue 1
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
int pause = 150;
int pause_red = 100;
int pause_blue = 100;
int whole_image_delay = 2000;
uint8_t temp1=1, temp3=3;  
void loop(){
  
  red.setBrightness(1);
  red.write(7,0, HIGH);
  red.write(7,1, HIGH);
  red.write(7,2, HIGH); 
  blue.setBrightness(15);
  blue.write(7,0,HIGH);
  blue.write(7,1,HIGH);
  blue.write(7,2,HIGH);
  delay (pause);
  blue.write(7,0,LOW);
  blue.write(7,1,LOW);
  blue.write(7,2,LOW);
  red.write(7,0, LOW);
  red.write(7,1, LOW);
  red.write(7,2, LOW);
  
  red.setBrightness(7);
  red.write(6,0, HIGH);
  red.write(6,1, HIGH);
  red.write(6,2, HIGH); 
  blue.setBrightness(7);
  blue.write(6,0,HIGH);
  blue.write(6,1,HIGH);
  blue.write(6,2,HIGH);
  delay (pause);
  blue.write(6,0,LOW);
  blue.write(6,1,LOW);
  blue.write(6,2,LOW);
  red.write(6,0, LOW);
  red.write(6,1, LOW);
  red.write(6,2, LOW);

  red.setBrightness(15);
  red.write(5,0, HIGH);
  red.write(5,1, HIGH);
  red.write(5,2, HIGH); 
  blue.setBrightness(1);
  blue.write(5,0,HIGH);
  blue.write(5,1,HIGH);
  blue.write(5,2,HIGH);
  delay (pause);
  blue.write(5,0,LOW);
  blue.write(5,1,LOW);
  blue.write(5,2,LOW);
  red.write(5,0,LOW);
  red.write(5,1,LOW);
  red.write(5,2,LOW);

  red.setBrightness(7);
  red.write(6,0, HIGH);
  red.write(6,1, HIGH);
  red.write(6,2, HIGH); 
  blue.setBrightness(7);
  blue.write(6,0,HIGH);
  blue.write(6,1,HIGH);
  blue.write(6,2,HIGH);
  delay (pause);
  red.write(6,0, LOW);
  red.write(6,1, LOW);
  red.write(6,2, LOW); 
  blue.write(6,0,LOW);
  blue.write(6,1,LOW);
  blue.write(6,2,LOW);

}


