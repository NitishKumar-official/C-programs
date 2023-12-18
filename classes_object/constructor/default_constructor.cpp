#include<iostream>
using namespace std;
 
 class Employee{
    public:
     Employee(){
        cout<<"default constructor"<<endl;
    }
 };

 int main(){
    Employee e1;
    return 0;
 }