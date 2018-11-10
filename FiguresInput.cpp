/*	Holden Sommers
	Figures
*/

#ifndef FIGURESINPUT_CPP 
#define FIGURESINPUT_CPP 
#include <iostream>
#include "figureHeader.h"
#endif /*FIGURESINPUT_CPP*/

using std::cin; using std::cout; using std::endl;


int main() {

	int choice = 1;

	do {

		cout << "Welcome to Figures! Enter Any Number Not Listed On the Menu to Quit." << endl << endl << "Please choose one of the following to be displayed: ";

		cout << endl << "\t 1. Square" << endl << "\t 2. Diagonal Line" << endl << "\t 3. Bottom Triangle" << endl << "\t 4. Top Triangle" << endl << endl << endl << "\t|";

		cin >> choice;

		if (choice == 1) {

			int choice2;

			cout << endl << "Would you like that as either (1) filled in or (2) hollow? ";

			cin >> choice2;

			int size;

			cout << endl << endl << "Awesome. Please Enter the Height of the Square: ";

			cin >> size;

			if (choice2 == 1) {

				filledSquare(size);
			}
			else if (choice2 == 2) {

				hollowSquare(size);
			}
			else {
				cout << endl << "Not a Valid Entry. Try Again." << endl;
			}

			cout << endl << "Very Good Then. " << endl << endl;
		}
		else if (choice == 2) {

			int size;

			cout << "Awesome. Please Enter the Height of the Line: ";

			cin >> size;

			diagonalLine(size);

			cout << endl << "Very Good Then. " << endl;
		}

		else if (choice == 3) {

			int size;

			cout << "Awesome. Please Enter the Height of the Triangle: ";

			cin >> size;

			bottomTriangle(size);

			cout << endl << "Very Good Then. " << endl;
		}

		else if (choice == 4) {

			int size;

			cout << "Awesome. Please Enter the Height of the Triangle: ";

			cin >> size;

			topTriangle(size);

			cout << endl << "Very Good Then. " << endl;
		}

	} while (choice == 1 || choice == 2 || choice == 3 || choice == 4);

}
