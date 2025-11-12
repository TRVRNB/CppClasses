#include <iostream>
#include <cstring>
#include "media.h"
// method definitions for the media class

media::media(char*vtitle, int vyear){
  strcpy(title, vtitle);
  year = vyear;
}

char* media::getTitle(){ // returns the title
  char title2[81];
  strcpy(title2, title);
  char* title3 = title2;
  return title3;
}

int media::getYear(){ // returns the year
  return year;
}
  
