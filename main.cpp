#include <iostream>
#include <cstring>
#include "media.h"
using namespace std;

// You will have a parent class for all digital media. It should have methods for the fields the child classes have in common.
// Video games must have the fields: title, year, publisher, rating.
// Music must have the fields: title, artist, year, duration, publisher.
// Movies must have the fields: title, director, year, duration, rating.

int main() { // main function
  cout << "Enter 'HELP' for a list of commands.\n";
  char input[81];
  while (strcmp(input, "QUIT") != 0){ // main loop, QUIT function
    cout << "\nEnter a command: ";
    cin >> input;
    if (strcmp(input, "HELP") == 0){ // HELP function
      cout << "'HELP': returns a list of commands";
    }
  }
  
  char title[81] = "Media title!";
  media* newmedia = new media(title, 2004);
  cout << newmedia->getYear() << endl;
  cout << newmedia->getTitle() << endl;
  cout << "Goodbye!\n";
  return 0;
}
