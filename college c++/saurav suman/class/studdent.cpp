#include<iostream>
#include<string.h>
using namespace std;

 class student{
    private:
    int roll;
    char name[20];
    public:
    void getdata(int r, char *n){
        roll=r; 
        strcpy(name,n);
    }
    void putdata(){
        cout<<"roll:-"<<roll<<endl;
        cout<<"name:-"<<name<<endl;
    }
 };

 int main(){
    student s1;
    s1.getdata(1235,"Nitish");
    s1.putdata();
 }