#include <iostream>
#include <vector>
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
  std::vector<media*> media_list;
  cout << "Enter 'HELP' for a list of commands.\n";
  char input[81] = "";
  while (strcmp(input, "QUIT") != 0) { // main loop, QUIT function
    cout << "\n$ Enter a command: ";
    cin >> input;
    if (strcmp(input, "HELP") == 0) { // HELP function
      cout << "'HELP': returns a list of commands\n";
      cout << "'ADD': add to the list of media\n";
      cout << "'SEARCH': search for a specific entry, to delete or to view\n";
      cout << "'QUIT': halts the program\n";
      cout << std::flush;
    } else if (strcmp(input, "ADD") == 0) { // ADD function
    	cout << "$ movie, music, or videogame?: " << flush;
    	char input1[81];
    	cin >> input1;
    	cin.ignore(1000, '\n');
    	if (strcmp(input1, "movie") == 0) { // add movie
    	  char title[81];
    	  cout << "$ Enter a title: " << flush;
    	  cin.getline(title, 81);
    	  char director[81];
    	  cout << "$ Enter a director: " << flush;
    	  cin.getline(director, 81);
    	  int year;
    	  cout << "$ Enter a year: " << flush;
    	  cin >> year;
    	  float rating;
    	  cout << "$ Enter a rating: " << flush;
    	  cin >> rating;
    	  float duration;
    	  cout << "$ Enter a duration: " << flush;
    	  cin >> duration;
    	  // create and push back
    	  movie* newmedia = new movie(title, year, rating, duration, director);
    	  media_list.push_back(newmedia);
    	}
    	  
    	if (strcmp(input1, "videogame") == 0) { // add videogame
    	  char title[81];
    	  cout << "$ Enter a title: " << flush;
    	  cin.getline(title, 81);
    	  char publisher[81];
    	  cout << "$ Enter a publisher: " << flush;
    	  cin.getline(publisher, 81);
    	  int year;
    	  cout << "$ Enter a year: " << flush;
    	  cin >> year;
    	  float rating;
    	  cout << "$ Enter a rating: " << flush;
    	  cin >> rating;
    	  // create and push back
    	  videogame* newmedia = new videogame(title, year, rating, publisher);
    	  media_list.push_back(newmedia);
    	}
    	  
    	if (strcmp(input1, "music") == 0) { // add music
    	  char title[81];
    	  cout << "$ Enter a title: " << flush;
    	  cin.getline(title, 81);
    	  char artist[81];
    	  cout << "$ Enter an artist: " << flush;
    	  cin.getline(artist, 81);
    	  int year;
    	  cout << "$ Enter a year: " << flush;
    	  cin >> year;
    	  char publisher[81];
    	  cout << "$ Enter a publisher: " << flush;
    	  cin.getline(publisher, 81);
    	  float duration;
    	  cout << "$ Enter a duration: " << flush;
    	  cin >> duration;
    	  // create and push back
    	  music* newmedia = new music(title, year, publisher, duration, artist);
    	  media_list.push_back(newmedia);
    	}
    
    } else if (strcmp(input, "SEARCH") == 0) {
    	cout << "search\n";
    
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
