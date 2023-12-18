#include<iostream>
using namespace std;

int count=0;
class demo{
    public:
    demo(){
        count++;
        cout<<"\n no of obj created: "<<count;
    }

    ~demo(){
        count--;
        cout<<"\n no of obj destroid: "<<count;
    }
};

int main(){
    demo obj1,obj2, obj3;
    {
        demo obj4;
    }
    return 0;
}