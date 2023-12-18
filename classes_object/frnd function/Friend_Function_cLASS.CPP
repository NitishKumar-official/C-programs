#include<iostream>
using namespace std;

class demo;

class demo2{

    public:
    void display(demo& obj);
};


class demo{
    private:
    int private_variable;
    protected:
    int protected_variable;
    public:
    void get(){
        private_variable= 10;
        protected_variable= 99;
    }
    friend void demo2::display(demo& obj);
};


 void demo2::display(demo& obj){
    cout<<"private_variable:"<<obj.private_variable<<endl;
    cout<<"protected_variable:"<<obj.protected_variable;

 }

 int main(){
    demo object1;
    demo2 object2;
    object1.get();
    object2.display(object1);
 }