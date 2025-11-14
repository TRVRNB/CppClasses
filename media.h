#ifndef MEDIA
#define MEDIA

#include <iostream>

// base media class for the whole program
class media {
public:
  char title[81];
  int* year = new int;
  media(char* vtitle, int vyear); 
  char* getTitle();
  int getYear();
  ~media();
};

#endif