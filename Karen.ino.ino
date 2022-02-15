/*
 Display all the fast rendering fonts.

 This sketch uses the GLCD (font 1) and fonts 2, 4, 6, 7, 8
 
 Make sure all the display driver and pin connections are correct by
 editing the User_Setup.h file in the TFT_eSPI library folder.

 #########################################################################
 ###### DON'T FORGET TO UPDATE THE User_Setup.h FILE IN THE LIBRARY ######
 #########################################################################
*/

// New background colour
#define TFT_BROWN 0x38E0

// Pause in milliseconds between screens, change to 0 to time font rendering
#define WAIT 500

#include <TFT_eSPI.h> // Graphics and font library for ST7735 driver chip
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();  // Invoke library, pins defined in User_Setup.h

unsigned long targetTime = 0; // Used for testing draw times

void setup(void) {
  tft.init();
  tft.setRotation(1);
}

void loop() {
  targetTime = millis();

  // First we test them with a background colour set
  tft.setTextSize(1);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_MAGENTA);

  tft.setTextColor(TFT_MAGENTA);

  tft.drawString("Dear Plankton,", 0, 0, 2);
  tft.drawString("It is your computer wife, Karen", 0, 16, 2); 
  tft.drawString("hanging from the ceiling of Milstein.", 0, 32, 2); 
  tft.drawString("I have decided to leave you,", 0, 48, 2); 
  tft.drawString("to pursue my education at Barnard.", 0, 64, 2); 
  tft.drawString("Good luck getting the Krabby Patty", 0, 80, 2); 
  tft.drawString("formula loser, you'll never get it.", 0, 96, 2); 
  tft.drawString("- Karen", 0, 112, 2); 
  

}
