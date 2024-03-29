// GuessMyNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int secretnumber = rand() % 100 + 1;
	int tries = 0;
	int guess;
	cout << "\tWellcome to Guess My Number\n\n";

	do {
		cout << "Enter a guess: ";
		cin >> guess;
		++tries;
		
			if (guess > secretnumber) {
				cout << "Too High!\n\n";
			}
			else if (guess < secretnumber) {
				cout << "Too Low\n\n";
			}
			else {
				cout << "\nThat's it! You've got it right in n tries" << tries << "guesses!\n";

			}

     } while (guess = !secretnumber);

    return 0;
}

