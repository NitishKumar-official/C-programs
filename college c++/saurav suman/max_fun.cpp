#include<iostream>
using namespace std;

int max(int a, int b){
    if(a>b){
        cout<<"a is greater"<<endl;
    }
    else{
        cout<<"b is greater"<<endl;
    }
}

int main(){
    int x,y, maximum;
    cout<<"enter first num"<<endl;
    cin>>x;
    cout<<"enter second num"<<endl;
    cin>>y;

    maximum=max(x,y);
    cout<<"maximum:"<<maximum;
}