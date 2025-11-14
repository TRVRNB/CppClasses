#ifndef MUSIC
#define MUSIC

#include <iostream>
#include "media.h"

class music : public media {
public:
  char artist[81];
  char publisher[81];
  float* duration = new float;
  music(char*vtitle, int vyear, char* vpublisher, float vduration, char* vartist);
  ~music();
  char* getPublisher();
  float getDuration();
  char* getArtist();
};

#endif