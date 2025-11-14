#ifndef VIDEOGAME
#define VIDEOGAME

#include <iostream>
#include "media.h"

class videogame : public media {
public:
  char publisher[81];
  float* rating = new float;
  videogame(char*vtitle, int vyear, float vrating, char* vpublisher);
  ~videogame();
  float getRating();
  char* getPublisher();
};

#endif