#include <iostream>
#include <cstring>
#include "videogame.h"
// method definitions for the videogame class

videogame::videogame(char*vtitle, int vyear, float vrating, char*vpublisher):media(vtitle, vyear){
  strcpy(title, vtitle);
  *year = vyear;
  strcpy(publisher, vpublisher);
  *rating = vrating;
}

char* videogame::getPublisher(){ // returns the publisher
  return publisher;
}

float videogame::getRating(){ // returns the rating
  return *rating;
}

videogame::~videogame(){ // destructor
  delete rating;
}
