/*A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask user to enter marks and print the corresponding grade.*/


#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter the marks";
    cin>>marks;
    if(marks<25)
    {
        cout<<"your grade is F";
    }
    else if(marks<45)
    {
        cout<<"your grade is E";
    }
    else if(marks<50)
    {
        cout<<"your grade is D";
    }
     else if(marks<60)
    {
        cout<<"your grade is C";
    }
     else if(marks<80)
    {
        cout<<"your grade is B";
    }
    else if(marks>80)
    {
        cout<<"your grade is A";
    }
}