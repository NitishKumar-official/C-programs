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
        cout<<"after assignment:"<<endl;
        cout<<x;
    }
    void operator=(DEMO obj){
        x=obj.x;
    }
};

int main()
{
    DEMO obj1,obj2;
    obj2.getdata();
    

    obj1=obj2;

    obj1.display();
}