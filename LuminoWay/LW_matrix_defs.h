/*
  Header file with definitions for LuminoWay RGB matrix control
  Heades has to be included in every example or program that uses MAX7219
  led driver.
  Created by Jurica Resetar.
  jurica_resetar@yahoo.com
  9.2016.
*/


/* create a new Matrix instance
   pin 0: data  (din)
   pin 1: clock (clk)
   pin 2: load  (load)
   Matrix matrix_name = Matrix(data, clock, load)
*/
#define CLOCK       (6)   // Common clock for max7219 drivers
#define GREEN_DATA  (10)  // Max7219 green matrix
#define GREEN_LOAD  (7)  // Max7219 green matrix
#define RED_DATA    (9)  // Max7219 red matrix
#define RED_LOAD    (12)  // Max7219 red matrix
#define BLUE_DATA   (8)  // Max7219 blue matrix
#define BLUE_LOAD   (11)  // Max7219 blue matrix
