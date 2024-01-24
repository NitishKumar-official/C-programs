#include<iostream>
using namespace std;

int main(){
    int i, *ptr,num;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    ptr=arr;
    cout<<"enter a num"<<endl;
    cin>>num;

    for(i=0;i<10; i++){
          if(*ptr==num)
          {
            cout<<"number exist in the array"<<endl;
            break;
          }
          else if(i==9){
               cout<<"number is not present in the arry"<<endl;
          }
          ptr++;
    }
}