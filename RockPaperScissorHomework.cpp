#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main () {
int num1, num2;
cout<<" scissor (0), rock (1), paper (2) ";
cin>>num1;
srand(time(0));
num2 = rand() % 3 + 0 ;
if(num2==0) cout<<"The computer is scissor.";
if(num2==1) cout<<"The computer is rock.";
if(num2==2) cout<<"The computer is paper.";
if(num1==0) cout<<" You are scissor.";
if(num1==1) cout<<" You are rock.";
if(num1==2) cout<<" You are paper.";
if(num2==0 && num1==1) cout<<" You won";
if(num2==0 && num1==2) cout<<" The computer won";
if(num2==1 && num1==2) cout<<" You won";
if(num2==1 && num1==0) cout<<" The computer won";
if(num2==2 && num1==0) cout<<" You won";
if(num2==2 && num1==1) cout<<" The computer won";
if(num1==num2) cout<<" Its a draw";

return 0;
}
