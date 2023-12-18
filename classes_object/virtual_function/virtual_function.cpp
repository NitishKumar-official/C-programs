#include<iostream>
using namespace std;

class A{
    protected:
    int a;
    public:
    void input(){
        cout<<"\n Eneter value of a ";
        cin>>a;
    }
    void output(){
        cout<<"\n a="<<a;
    }
};

class B{
    protected:
    int b;
    public:
    void input(){
        cout<<"\n Enter value of b";
        cin>>b;
    }
    void putdata(){
        cout<<"\n b="<<b;

    }
};

class C:public A, public B{
    int c;
    public:
    void input(){
        cout<<"enter value of c";
        cin>>c;
        A::input(); B::input();
    }
    void display(){
        cout<<"\n c="<<c;
    }

};