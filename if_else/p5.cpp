/*A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.*/


#include<iostream>
using namespace std;
int main()
{
    int NumClass, NumClassAtnd,OrgPer;
    cout<<"enter total number of class";
    cin>>NumClass;
    cout<<"enter total number of attend classes";
    cin>>NumClassAtnd;
    OrgPer=NumClassAtnd*100/NumClass;
    if(OrgPer>75){
        cout<<"u are  elegible for sit in exam";
    }
    else{
                cout<<"u are  not elegible for sit in exam";
    }

    

}