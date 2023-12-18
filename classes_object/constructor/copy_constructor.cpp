#include<iostream>
using namespace std;

class A{
    public:
    int roll;
    A(int i){     // parameterized construtor
        roll=i;
    }
    A(A &i){      //copy constructor
        roll=i.roll;
    }
};

int main(){
    A obj1(50);
    A obj2(obj1);
    A obj3=obj1;
    cout<<obj2.roll<<endl;
    cout<<obj3.roll;
    return 0;
}