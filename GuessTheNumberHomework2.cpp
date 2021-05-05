#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int num1, num2;
    cout << "Guess My Number Game\n\n";
    cout<<"Enter the minimum value in which the random number to be present: ";
    cin>>num1;
    cout<<"Enter the maximum value in which the random number to be present: ";
    cin>>num2;
    int num = rand() % (num2-num1+1) + num1;

    int guess = 0, cnt=0, cnt2=0, a, b;
    while (guess != num) {
        cout << "Enter a guess between "<<num1<<" and "<<num2<<" :";
        cin >> guess;
        if(guess==0) break;
        cnt++;
        if (guess > num) {
            cout << "Too high!\n\n";
        }
        else if (guess < num)
            {
                cout << "Too low!\n\n";
            }
        else {
            cout << "\nCorrect! You got it in !"<<endl;
            cout<<"It took you "<<cnt<<" times."<<endl;
        }
        if(cnt>5) {
        cnt2=0;
        a=guess;
        while(a!=0) {
            b=a%10;
            if(b==0 or b==6 or b==9) cnt2++;
            else if(b==8) cnt2=cnt2+2;
            a=a/10;
        }
        cout<<"The number or circles your number has is : "<<cnt2<<endl;
        }

    }

    return 0;
}
