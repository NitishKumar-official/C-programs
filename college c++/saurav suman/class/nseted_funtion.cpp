#include<iostream>
using namespace std;


class Maxpair{
    int num1,num2;
    public:
    void read(){
        cout<<"enter first num"<<endl;
        cin>>num1;
        cout<<"enter secend num"<<endl;
        cin>>num2;
    }
    int MAX(){
        if(num1>num2)
        return num1;
        else
        return num2;
    }

    void showMax(){
        cout<<"maximum:"<<MAX();
    }

};
int main(){
    Maxpair p;
    p.read();
    p.showMax();
}

