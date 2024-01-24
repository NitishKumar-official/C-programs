#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *ptr;
    ptr=&a;

    cout<<"the value of a :"<<*ptr;
    return 0;
}