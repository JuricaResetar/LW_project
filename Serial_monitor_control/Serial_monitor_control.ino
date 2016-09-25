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
  Serial.begin(9600);
  red.clear(); // clear display
  blue.clear(); // clear display
  green.clear(); // clear display
}

void loop(){
  int i,j,k;
  int pause = 25;
  int x,y;
  int color;    //RED=0, GREEN=1, BLUE=2
  
  while (Serial.available() > 0){
    x = Serial.parseInt();
    y = Serial.parseInt();     
    color = Serial.parseInt();
    Serial.print("X=");
    Serial.print(x);
    Serial.print("\nY=");
    Serial.print(y);
    Serial.print("\nColor:");
    if (color==1){
      Serial.print(" red.\n");
      red.write(x,y, HIGH);
    }
    else if (color==2){
      Serial.print(" green.\n");
      green.write(x,y, HIGH);
    }
    else if (color==3){
      Serial.print(" blue.\n");
      blue.write(x,y, HIGH);
    }
    
  }
}

