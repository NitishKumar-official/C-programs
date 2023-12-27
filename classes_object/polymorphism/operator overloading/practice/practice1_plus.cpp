#include<iostream>
using namespace std;

class student{
    int marks;
    public:
    void getmarks(){
        cout<<"enter marks:\n";
        cin>>marks;
    }

    void putmarks(){
        cout<<"marks:"<<marks<<endl;

    }

    student operator+(student obj){
        student s3;
        s3.marks=marks+obj.marks;
        return s3;
    }

};
int main(){
student s1, s2,s3;
s1.getmarks();
s2.getmarks();
s3=s1+s2;
s1.putmarks();
s2.putmarks();
s3.putmarks();
return 0;

}
