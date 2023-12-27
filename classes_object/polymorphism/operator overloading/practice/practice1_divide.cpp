#include<iostream>
using namespace std;

class student{
    int reg;
    public:
     void getreg(){
        cout<<"enter student reg\n";
        cin>>reg;
    }
    void putreg(){
        cout<<"student reg:"<<reg;
    }
    student operator/(student obj){
        student s3;
        s3.reg=reg/obj.reg;
        return s3;
    }
};

int main(){
    student s1,s2,s3;
    s1.getreg();
    s2.getreg();
    s3=s1/s2;
    s1.putreg();
    s2.putreg();
    s3.putreg();
    return 0;
}