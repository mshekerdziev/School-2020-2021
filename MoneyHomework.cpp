#include <iostream>
using namespace  std;
int main () {
double cost=10000, proc, total=0;
int i;
cout<<"Cost of 1 year: "<<cost<<endl;
for(i=2; i<=14; i++) {
    proc=cost*6/100;
    cost=cost+proc;
    cout<<"Cost of "<<i<<" year: "<<cost<<endl;
    if(i > 10) total=total+cost;
}
cout<<"Total cost for the last 4 years is: "<<total;
return 0;
}
