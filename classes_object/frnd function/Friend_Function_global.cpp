#include<iostream>
using namespace std;

class demo{
    private:
    int private_variable;
    protected:
    int protected_variable;
    public:
     void get(){
         private_variable=10;
         protected_variable=99;
    }

    friend void display(demo& obj);
};

void display(demo& obj){
    cout<<"private variable  "<<obj.private_variable<<endl;
    cout<<"protected variable  "<<obj.protected_variable;

}

int main(){
    demo obj;
    obj.get();
    display(obj);
    return 0;
}
