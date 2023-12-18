#include<iostream>
using namespace std;

class A{
    public:
    void message(){
        cout<<"welcome to inhertance"<<endl;
    }
};

class B:public A{
    public:
    void display(){
        cout<<"inside class b"<<endl;
    }
};

class C : public A{
    public:
    void putdata(){
        cout<<"inside class c"<<endl;
    }
};

int main(){
    B obj;
    C obj1;
    obj.display();
    obj.message();
    obj1.putdata();
    obj1.message();
    return 0;
}