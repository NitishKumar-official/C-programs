#include<iostream>
using namespace std;

class ITEM{
    int x,y;
    static int z;
    public:
    void getdata(int a,int b){
         x=a;
         y=b;
         z=z+1;

    }
    void putdata(){
        cout<<"x\t"<<x<<"\ty"<<y<<endl;
    }
    static void fun(){
        cout<<"z\t"<<z;
    }
};

int ITEM:: z;
int main(){
    ITEM item1;
    item1.getdata(5,6);
    item1.putdata();
     ITEM::fun();
     return 0;
}