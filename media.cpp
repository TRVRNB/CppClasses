#include <iostream>
#include <cstring>
#include "media.h"
// method definitions for the media class

media::media(char*vtitle, int vyear){
  strcpy(title, vtitle);
  *year = vyear;
}

char* media::getTitle(){ // returns the title
  static char* title2 = title; // the pointer to this will be returned. in my testing, it gets promptly overwritten about 2/3 of the time when it is not static, and this is likely system-dependent
  return title2;
}

media::~media(){ // destructor
  delete year;
}

int media::getYear(){ // returns the year
  return *year;
}
  
