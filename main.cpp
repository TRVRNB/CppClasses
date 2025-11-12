#include <iostream>
#include "media.h"
using namespace std;

// You will have a parent class for all digital media. It should have methods for the fields the child classes have in common.
// Video games must have the fields: title, year, publisher, rating.
// Music must have the fields: title, artist, year, duration, publisher.
// Movies must have the fields: title, director, year, duration, rating. (30 points)

int main() { // main function
  char title[81] = "Media title!";
  media* newmedia = new media(title, 2004);
  cout << newmedia->getYear() << flush;
  return 0;
}
