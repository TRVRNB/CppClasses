#include <iostream>
#include <cstring>
#include "media.h"
#include "movie.h"
#include "music.h"
#include "videogame.h"
using namespace std;

// You will have a parent class for all digital media. It should have methods for the fields the child classes have in common.s
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
      cout << "'HELP': returns a list of commands\n";
      cout << "'QUIT': halts the program\n";
      cout << std::flush;
    }
  }

  char title[81] = "Media title!";
  char director[81] = "Anita Jablonski";
  movie* newmedia = new movie(title, 2004, 4.3, 20.42, director);
  cout << newmedia->getYear() << endl;
  cout << newmedia->getTitle() << endl;
  cout << newmedia->getRating() << endl;
  cout << newmedia->getDuration() << endl;
  cout << newmedia->getDirector() << endl;
  cout << "Goodbye!\n";
  return 0;
}
