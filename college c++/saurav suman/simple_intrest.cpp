#include<iostream>
using namespace std;

int get_SimpleIntrest(int p,int r,int t){
    return (p*r*t)/100;

}

int main(){
    int p,r,t, si;
    cout<<"enter p"<<endl;
    cin>>r;
    cout<<"enter r"<<endl;
    cin>>r;
    cout<<"enter t"<<endl;
    cin>>t;

    si=get_SimpleIntrest(p,r,t);
    cout<<"simple intrest   "<<si;
    
}