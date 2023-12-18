#include<iostream>
using namespace std;

class DEMO{
    int x;
    public:
    void getdata(){
        cout<<"\n Enter num:";
        cin>>x;
    }

    void display(){
        cout<<"increment or decrement:"<<endl;
        cout<<x;
    }
    void operator++(){
        x=x+1;
    }
};

int main(){
    DEMO obj1;
    obj1.getdata();
    

    ++obj1;
    obj1.display();
    return 0;
}