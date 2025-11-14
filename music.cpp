#include <iostream>
#include <cstring>
#include "music.h"
// method definitions for the music class

music::music(char*vtitle, int vyear, char*vpublisher, float vduration, char*vartist):media(vtitle, vyear){
  strcpy(title, vtitle);
  strcpy(artist, vartist);
  *year = vyear;
  strcpy(publisher, vpublisher);
  *duration = vduration;
}

char* music::getPublisher(){ // returns the publisher
  static char* d2 = publisher; 
  return d2;
}

float music::getDuration(){ // returns the duration
  return *duration;
}

music::~music(){ // destructor
  delete duration;
}

char* music::getArtist(){ // returns the artist
  static char* d2 = artist; 
  return d2;
}