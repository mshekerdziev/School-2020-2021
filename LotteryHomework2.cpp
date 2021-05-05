#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); //seed random number generator
    int lottery = rand() % 900 + 100;// random number between 1 and 999
	// Prompt the user to enter a guess

	cout << "Enter your lottery pick (3 digits): ";
	int guess = 0, cnt=0;// enter a guess
	cin >> guess;
	// Get digits from lottery
       int a = lottery;
       int lotteryDigit3 = a % 10;
       a = a / 10;
       int lotteryDigit2 = a %10;
       a = a / 10;
	int lotteryDigit1 = a % 10;
	// Get digits from guess
       int b = guess;
       int guessDigit3 = b % 10;
	b = b / 10;
	int guessDigit2 = b % 10;
       b = b / 10;
       int guessDigit1 = b % 10;
	cout << "The lottery number is " << lottery << endl;
	// Check the guess
	if (guess == lottery){
		cout << "Exact match: you win $10,000";
	}
	else
       {
       if (guessDigit1 == lotteryDigit1 or
           guessDigit1 == lotteryDigit2 or
           guessDigit1 == lotteryDigit3)
            cnt++;
        if (guessDigit2 == lotteryDigit1 or
            guessDigit2 == lotteryDigit2 or
            guessDigit2 == lotteryDigit3)
             cnt++;
        if (guessDigit3 == lotteryDigit1 or
            guessDigit3 == lotteryDigit2 or
            guessDigit3 == lotteryDigit3)
             cnt++;
        }

    if (cnt == 3)
    {
        cout << "Match all digits: you win $3,000";
    }
	else if (cnt == 2)
	{
		cout << "Match two digits: you win $2,000";
	}
       else if (cnt==1)
       {
            cout<<"Match one digit: you win $1,000";
        }
	else{
		cout << "Sorry, no match";
	}
}
