#include<iostream>
#include<string>
using namespace std;

class binary{
    string s;
    public:
    void input();
    void cheak_bin();
    void converter();
    void display();
};
 void binary::input(){
    cout<<"enter a number"<<endl;
    cin>>s;
 }
 void binary::cheak_bin(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"\n Incorrect binary number format"<<endl;
            exit(0);
        }
    }
 }
 void binary::converter(){
    cheak_bin();
    for(int i=0; i<s.length();i++){
        if(s.at(i)=='0')
        s.at(i)='1';
        else 
        s.at(i)='0';
        
    }
 }

 void binary::display(){
    converter();
    cout<<"the i's complement of binary :"<<s<<endl;

 }

 int main(){
    binary b;
    b.input();
    b.display();
    return 0;
 }