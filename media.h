#include <iostream>

// base media class for the whole program
class media {
	public:
		char title[81];
		int year;
		media(char* vtitle, int vyear); // this might not matter much since it will be replaced by its children
		char* getTitle();
		int getYear();
};
