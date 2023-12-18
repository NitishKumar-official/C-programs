#include<iostream>
using namespace std;

class A{
    public:
    void putdata(){
        cout<<"inside class a"<<endl;
    }
};
class B : public A{
    public:
    void display(){
        cout<<"inside class b"<<endl;
    }
};
class C {
    public:
    void message(){
        cout<<"inside class c"<<endl;
    }
};

class D: public B, public C{
    public:
    void print(){
        cout<<"inside class d"<<endl;
    }

};

int main(){
    D obj;
    obj.print();
    obj.display();
    obj.message();
    obj.putdata();
    return 0;
}