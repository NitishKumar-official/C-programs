#include<iostream>
using namespace std;
int main()
{
    int n;
    int count=1;
    cout<<"enter the value of n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            
            cout<<count<<" ";
            count=count+1;
        }
        cout<<"\n";
    }
}