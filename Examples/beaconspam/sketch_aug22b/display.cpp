

#include "display.h"
#include "Wire.h"
#include "SSD1306.h"

SSD1306 display (0x3c, 4, 5);


//Section Display functions - break out to library later
void clearDisplay(){
  display.clear();
}

void displayLine(int x, int y, String output){
  initDisplay();
  display.drawString(x,y,output);
  display.display();
}

void initDisplay(){
  display.init();
  display.flipScreenVertically ();
  display.clear();
  display.setTextAlignment (TEXT_ALIGN_LEFT);
  display.setFont(ArialMT_Plain_10);
    
  display.setColor(BLACK);
  display.fillRect(0,0,127,10);
  display.setColor(WHITE);
  display.display();
}


