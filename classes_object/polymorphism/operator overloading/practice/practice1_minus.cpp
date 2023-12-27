#include<iostream>
using namespace std;

class student{
    int roll;
    public:
    void getdata(){
        cout<<"enter  first student roll:\n";
        cin>>roll;
    }
    void putdata(){
        cout<<"first student roll:"<<roll<<endl;
    }
    student operator-(student obj){
        student s3;
        s3.roll=roll-obj.roll;
        return s3;
    }
};
int main(){
    student s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s3=s1-s2;
    s1.putdata();
    s2.putdata();
    s3.putdata();
    return 0;


}