#ifndef DISPLAY_H    // Put these two lines at the top of your file.
#define DISPLAY_H    // (Use a suitable name, usually based on the file name.)

#include "Wire.h"


void displayLine(int x, int y, String output);
void initDisplay();
void clearDisplay();

#endif // DISPLAY_H    // Put this line at the end of your file.
