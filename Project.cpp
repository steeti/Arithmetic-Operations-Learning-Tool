#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
	int choice;
	// Declare a variable
	int a, b, answer, result = 0;
	//using this function to get random numbers
	srand(time(NULL));
	cout << "Hello, Please choose one of the following options" << endl;
	cout << "1.Multiplication" << endl;
	cout << "2.Integer Division" << endl;
	cout << "3.Exit the program" << endl;
	cin >> choice;

	switch (choice) {
	case 1: {
		cout << "Please answer the following questions" << endl;
		//using for loop for the multiplication operation
		for (int i = 0; i < 10; i++) {
			// Assigning random numbers from 1-10 for a and b.
			a = (rand() % 9) + 1;
			b = (rand() % 9) + 1;
			// axb=answer
			cout << a << "x" << b << "=";
			cin >> answer;
			if (answer == a*b) {
				result++;
			}

		}
		break;
	}
	case 2: {
		cout << "Please answer the following questions" << endl;
		for (int i = 0; i < 10; i++) {
			// Assigning random numbers from 1-10 for a and b.
			a = (rand() % 9) + 1;
			b = (rand() % 9) + 1;
			// a/b=answer
cout << a << "/" << b << "=";
			cin >> answer;
			if (answer == a / b) {
				result++;
			}

		}
		break;
	}
	case 3:
		cout << "Exiting Program! \n";
		system("pause");
		// program will pause then exit.
exit(1);
		break;
	default:
		cout << "Invalid input. \n";
		system("pause");
		// program will pause then exit.
exit(1);
	}

	if (result >= 7) {
		cout << "Congratulations! " << endl;
	}
	else {
		cout << "Please ask your teacher for help!" << endl;
	}

	cout << "You scored " << result << "/10" << endl;
	// score “(correct answer)/10”
	system("pause");
	return(0);
}
