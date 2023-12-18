#include<iostream>
using namespace std;

class item{
    //private: by defalut ye private hi hota hai
     int first;
     int second;
     public:
       void input(){
        cout<<"enter first number"<<endl;
        cin>>first;
        cout<<"enter second  number"<<endl;
        cin>>second;
       }
       void sum();
};
void item::sum(){
    cout<<first+second;
}



int main(){
    item x;
    x.input();
    x.sum();

}