#include<iostream>
using namespace std;

void swap(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"In swap"<<endl;
    cout<<"x:"<<x<<endl;
    cout<<"y"<<y<<endl;
}

int main(){
    int x,y;
    cout<<"enter x"<<endl;
    cin>>x;
    cout<<"enter y"<<endl;
    cin>>y;

    cout<<"before swap"<<endl;
    cout<<"x:"<<x<<endl;
    cout<<"y"<<y<<endl;

    swap(x,y);

     cout<<"after swap"<<endl;
    cout<<"x:"<<x<<endl;
    cout<<"y"<<y<<endl;
    return 0;
}