#include<iostream>
using namespace std;

class ITEM{
    int x;
    public:
    ITEM(){
        x=10;
    }
    ITEM(int a){
    x=a;
    }
    ITEM(ITEM &i){
        x=i.x;
    }
    void putdata(){
        cout<<"\n x="<<x;

    }
};

int main(){
    ITEM obj1;
    ITEM obj2(20);
    ITEM obj3(obj1);

    obj1.putdata();
    obj2.putdata();
    obj3.putdata();

}