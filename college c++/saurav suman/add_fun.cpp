#include<iostream>

using namespace std;

int add(int a, int b){
    return a+b;
}

int main(){
    int x=8, y=8;
    int sum=add(x,y);
    cout<<"sum"<<setw(5)<<sum<<endl;

}