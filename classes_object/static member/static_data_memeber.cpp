#include<iostream>
using namespace std;
 
 class Rana{
    int x,y;
    static int z;
    public:
     void getdata(int a, int b){
          x=a;
          y=b;
          z=z+1;
    }
    void putdata(){
        cout<<"x\t"<<x<<"\ty  "<<y<<"\tz  "<<z<<endl;
    }

 };

 int Rana::z;

 int main(){
    Rana itme1, item2;
    itme1.getdata(5,10);
    item2.getdata(51,36);
    itme1.putdata();
    item2.putdata();
    return 0;
 }