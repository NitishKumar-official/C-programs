/*A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.*/

#include<iostream>
using namespace std;
int main()
{
    int cost,unit;
    cout<<"enter unit";
    cin>>unit;
    cost=unit*100;
    if(cost>=1000)
    {
        cost=unit*100-unit*100*1/10;
        cout<<"total cost is"<<cost;
    }
    else{
        cout<<"total cost is"<<cost;
    }
}