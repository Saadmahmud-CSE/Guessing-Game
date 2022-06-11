#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,num, guess, tries = 0;
	srand(time(0));
	cout << "Enter n: ";
	cin>>n;
	num = rand() % n + 1;
	cout << "\nGuess My Number Game\n\n";
	do
	{
		cout << "Enter a guess between 1 and n : ";
		cin >> guess;
		tries++;
		if (guess > num)
			cout << "Too high!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
	} while (guess != num);

	return 0;
}

