#include<iostream>
using namespace std;

int main(){
    int a=19;
    int &b=a;
    int &c=a;

    cout<<"value of a:"<<a<<endl;
    cout<<"value of b:"<<b<<endl;
    cout<<"valur of c:"<<c<<endl;

}