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
int main() {
	std::vector<media*> media_list;
	cout << "Enter 'HELP' for a list of commands.\n";
	char input[81] = "";
	while (strcmp(input, "QUIT") != 0) { // quit
		cout << "\n$ Enter a command: ";
		cin >> input;
		cin.ignore(1000, '\n');

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
		if (strcmp(input, "HELP") == 0) { // help
			cout << "'HELP': returns a list of commands\n";
			cout << "'ADD': add to the list of media\n";
			cout << "'SEARCH': search for a specific entry, to delete or to view\n";
			cout << "'QUIT': halts the program\n";
			cout << std::flush;

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
		} else if (strcmp(input, "ADD") == 0) { // add
			cout << "$ movie, music, or videogame?: " << flush;
			char input1[81];
			cin >> input1;
			cin.ignore(1000, '\n');
			if (strcmp(input1, "movie") == 0) { // add movie
				char title[81];
				cout << "$ Enter a title: " << flush;
				cin.getline(title, 80);
				char director[81];
				cout << "$ Enter a director: " << flush;
				cin.getline(director, 80);
				int year;
				cout << "$ Enter a year: " << flush;
				cin >> year;
				cin.ignore(1000, '\n');
				float rating;
				cout << "$ Enter a rating: " << flush;
				cin >> rating;
				cin.ignore(1000, '\n');
				float duration;
				cout << "$ Enter a duration: " << flush;
				cin >> duration;
				cin.ignore(1000, '\n');

				char* title_c = new char[strlen(title)+1];
				strcpy(title_c, title);
				char* director_c = new char[strlen(director)+1];
				strcpy(director_c, director);

				movie* newmedia = new movie(title_c, year, rating, duration, director_c);
				media_list.push_back(newmedia);
			}
			if (strcmp(input1, "videogame") == 0) { // add videogame
				char title[81];
				cout << "$ Enter a title: " << flush;
				cin.getline(title, 80);
				char publisher[81];
				cout << "$ Enter a publisher: " << flush;
				cin.getline(publisher, 80);
				int year;
				cout << "$ Enter a year: " << flush;
				cin >> year;
				cin.ignore(1000, '\n');
				float rating;
				cout << "$ Enter a rating: " << flush;
				cin >> rating;
				cin.ignore(1000, '\n');

				char* title_c = new char[strlen(title)+1];
				strcpy(title_c, title);
				char* publisher_c = new char[strlen(publisher)+1];
				strcpy(publisher_c, publisher);

				videogame* newmedia = new videogame(title_c, year, rating, publisher_c);
				media_list.push_back(newmedia);
			}
			if (strcmp(input1, "music") == 0) { // add music
				char title[81];
				cout << "$ Enter a title: " << flush;
				cin.getline(title, 80);
				char artist[81];
				cout << "$ Enter an artist: " << flush;
				cin.getline(artist, 80);
				int year;
				cout << "$ Enter a year: " << flush;
				cin >> year;
				cin.ignore(1000, '\n');
				char publisher[81];
				cout << "$ Enter a publisher: " << flush;
				cin.getline(publisher, 80);
				float duration;
				cout << "$ Enter a duration: " << flush;
				cin >> duration;
				cin.ignore(1000, '\n');

				char* title_c = new char[strlen(title)+1];
				strcpy(title_c, title);
				char* artist_c = new char[strlen(artist)+1];
				strcpy(artist_c, artist);
				char* publisher_c = new char[strlen(publisher)+1];
				strcpy(publisher_c, publisher);

				music* newmedia = new music(title_c, year, publisher_c, duration, artist_c);
				media_list.push_back(newmedia);
			}

		} else if (strcmp(input, "SEARCH") == 0) { // search
			char input1[81];
			cout << "$ Enter a title or year to search for: " << flush;
			cin.getline(input1, 80);
			vector<media*> results;
			// check if it is a year or not
			bool isnum = true;
			for (int i = 0; input1[i] != '\0'; i++) {
				if (!isdigit(static_cast<unsigned char>(input1[i]))) {
					isnum = false;
					break;
				}
			}
			int year = 0;
			if (isnum) {
				year = atoi(input1);
			}
			// look over all the media
			for (media* m : media_list) {
				bool match = false;
				if (isnum && m->getYear() == year) {
					match = true;
				}
				if (!isnum && strcmp(m->getTitle(), input1) == 0) {
					match = true;
				}
				if (match) {
					results.push_back(m);
					cout << "\n";
					media* pMedia = m;
					// print the type out
					movie* mo = dynamic_cast<movie*>(pMedia);
					if (mo != NULL) {
						cout << mo->getTitle() << ", "
						<< mo->getYear() << ", "
						<< mo->getDirector() << ", "
						<< mo->getDuration() << ", "
						<< mo->getRating() << "\n";
					} else {
						videogame* v = dynamic_cast<videogame*>(pMedia);
						if (v != NULL) {
							cout << v->getTitle() << ", "
							<< v->getYear() << ", "
							<< v->getPublisher() << ", "
							<< v->getRating() << "\n";
						} else {
							music* mu = dynamic_cast<music*>(pMedia);
							if (mu != NULL) {
								cout << mu->getTitle() << ", "
								<< mu->getArtist() << ", "
								<< mu->getYear() << ", "
								<< mu->getDuration() << ", "
								<< mu->getPublisher() << "\n";
							}
						}
					}
				}
			}
			// if there are results, ask for deletion
			if (!results.empty()) {
				cout << '\n';
				cout << "$ Choose an entry index to delete, with the first result being 0 (type -1 to skip): " << flush;
				int to_delete = -1;
				cin >> to_delete;
				cin.ignore(1000, '\n');
				if (to_delete >= 0 && to_delete < static_cast<int>(results.size())) {
					// find the object in media_list and remove it
					for (auto it = media_list.begin(); it != media_list.end(); ++it) {
						if (*it == results[to_delete]) {
							delete *it; // this should call the destructor
							media_list.erase(it);  // remove from vector
							break;
						}
					}
					cout << "Entry deleted.\n";
				}
			}
		}
	}

	cout << "Goodbye!\n";
	return 0;
}
