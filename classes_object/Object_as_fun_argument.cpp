#include<iostream>
using namespace std;

class Time{
    int h, m;
    public:
    void getData();
    void putData();
    void sum( Time T1, Time T2); //object as a funtion argument 
};

void Time::getData(void){
    cout<<" Hour"<<endl;
    cin>>h;
     cout<<" Min"<<endl;
    cin>>m;
    }
void Time:: putData(){
    cout<<"Hour: "<<h<<endl;
    cout<<"Minute: "<<m<<endl;
    } 

void Time:: sum(Time T1, Time T2){ //object as a funtion argument 
    h=(T1.m+T2.m)/60;
    m=(T1.m+T2.m)%60;
    h=h+(T1.h+T2.h);

}      

int main(){
    Time T1,T2,T3;
    cout<<"enter HOUR1 and MIN1 "<<endl;
   T1.getData();
   cout<<"enter HOUR2 and MIN2 "<<endl;
   T2.getData();
   T3.sum(T1,T2);
   T1.putData();
   T2.putData();
   cout<<"total Hour and Min"<<endl;
   T3.putData();

}
