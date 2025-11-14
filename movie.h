#ifndef MOVIE
#define MOVIE

#include <iostream>
#include "media.h"

class movie : public media {
public:
  char director[81];
  float* rating = new float;
  float* duration = new float;
  movie(char*vtitle, int vyear, float vrating, float vduration, char* vdirector);
  ~movie();
  float getRating();
  float getDuration();
  char* getDirector();
};

#endif