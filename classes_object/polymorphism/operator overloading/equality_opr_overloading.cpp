#include<iostream>
using namespace std;

class Equality{
    int a;
    public:
    void getdata(){
        cout<<"\n Enter a number";
        cin>>a;
    }
    void putdata(){
        cout<<"\n a="<<a;

    }

    bool operator==(Equality obj)
    {
        if(a==obj.a)
        return true;
        else 
        return false;
    }
};

int main(){
    Equality obj1,obj2;
    obj1.getdata();
    obj2.getdata();
    obj1.putdata();
    obj2.putdata();
    if(obj1==obj2)
    cout<<"\n equal"<<endl;
    else 
    cout<<"not equal"<<endl;
}