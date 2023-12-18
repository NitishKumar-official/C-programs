//Take two int values from user and print greatest among them.

#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"enter two value";
    cin>>a>>b;
    if(a>b){
        cout<<"a is greater ";
    }
    else if(a==b){
        cout<<"both are equal";
    }
    else{
        cout<<"b is greater";
    }
}