#include<iostream>
using namespace std;

int main(){
    int a, *ptr1, **ptr2;
    ptr1=&a;
    ptr2=&ptr1;

    cout<<"address of a"<<ptr1<<endl;
    cout<<"address of ptr1"<<ptr2<<endl;

    cout<<"after incrementing the address"<<endl;
    ptr1+=2;
    ptr2+=2;
    cout<<"address  of a"<<ptr1<<endl;
    cout<<"address of ptr1"<<ptr2;
    return 0;
}