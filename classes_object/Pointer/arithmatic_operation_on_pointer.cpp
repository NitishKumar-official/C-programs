#include<iostream>
using namespace std;

int main(){
    int num[]={5,75,22,18,90};
    int *ptr;
    int i;
    cout<<"the array values are:"<<endl;
    for(i=0;i<5;i++)
    cout<<num[i]<<endl;

    ptr=num;
    cout<<"value of ptr:"<<*ptr<<endl;

    ptr++;
    cout<<"valur of ptr++:"<<*ptr<<endl;
    ptr++;
    cout<<"valur of ptr++:"<<*ptr<<endl;

    ptr--;
    cout<<"value of ptr--:"<<*ptr<<endl;

    ptr+=2;
    cout<<"valur of ptr+2:"<<*ptr<<endl;

    ptr-=2;
    cout<<"valur of ptr-2:"<<*ptr<<endl;
}