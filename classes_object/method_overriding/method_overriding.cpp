#include<iostream>
using namespace std;

class A{
    public:
    void display(){
        cout<<"this is base class"<<endl;
    }
};

class B :public A{
   public:
   void display(){
    cout<<"this is derived class"<<endl;
    //A ::display(); method 1 for access of first classs
   }
};

int main(){
    B obj;
    obj.display();

    //obj.A::display(); // method 2 for accessing of first class
}