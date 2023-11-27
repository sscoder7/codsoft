#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int number, Guess, Try = 0;
	srand(time(0)); 
	number = rand() % 100 + 1; 
	cout << "Guess My Number Game"<<endl;
    cout<<endl;

	do
	{
		cout << "Enter a Guess between 1 and 100 : ";
		cin >> Guess;
	    Try++;

		if (Guess > number)
			cout << "Too high!"<<endl;
		else if (Guess < number)
			cout << "Too low!"<<endl;
		else
			cout << "\nCorrect! You got it in " << Try << " Guesses!\n";
	} while (Guess != number);

	return 0;
}