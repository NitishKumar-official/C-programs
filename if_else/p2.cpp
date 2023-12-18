//Take values of length and breadth of a rectangle from user and check if it is square or not.


#include<iostream>
using namespace std;
int main()
{
    int len, bre;
    int area;
    cout<<"enter the length and breadh of a rectangle";
    cin>>len>>bre;
    if(len==bre){
        cout<<"it is a square"<<endl;
        area=len*len;
        cout<<area;
    }
    else{
        cout<<"it is a rectangle"<<endl;
     area=len*bre;
    cout<<area;
    }
    
}