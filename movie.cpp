#include <iostream>
#include <cstring>
#include "movie.h"
// method definitions for the movie class

movie::movie(char*vtitle, int vyear, float vrating, float vduration, char*vdirector):media(vtitle, vyear){
  strcpy(title, vtitle);
  strcpy(director, vdirector);
  *year = vyear;
  *rating = vrating;
  *duration = vduration;
}

float movie::getRating(){ // returns the rating
  return *rating;
}

float movie::getDuration(){ // returns the duration
  return *duration;
}

movie::~movie(){ // destructor
  delete rating;
  delete duration;
}

char* movie::getDirector(){ // returns the director
  static char* d2 = director; 
  return d2;
}