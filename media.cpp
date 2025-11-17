#include <iostream>
#include <cstring>
#include "media.h"
// method definitions for the media class

media::media(char*vtitle, int vyear){
  strcpy(title, vtitle);
  *year = vyear;
}

char* media::getTitle(){ // returns the title
  return title;
}

media::~media(){ // destructor
  delete year;
}

int media::getYear(){ // returns the year
  return *year;
}

