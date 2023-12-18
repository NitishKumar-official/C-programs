#include<iostream>
using namespace std;

class DEMO{
    int a ;
    public:
    void getdata(){
        cout<<"\n enter a number:";
        cin>>a;
    }

    void putdata(){
        cout<<"\n value="<<a;
    }
    
    /*DEMO operator+(DEMO const& obj){
        DEMO res;
        res.a= a+ obj.a;
        return res;
    }*/

    DEMO operator+(DEMO obj){
        DEMO res;
        res.a= a+ obj.a;
        return res;
    }
};

int main(){
DEMO obj1,obj2,obj3;

obj1.getdata();
obj2.getdata();
obj3=obj1+obj2;
obj1.putdata();
obj2.putdata();
obj3.putdata();


}