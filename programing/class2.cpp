#include<iostream>
#include<conio.h>
#include<stdlib.h>
class calculator
{

private:
    int x,y;
    char ch;
public:
    void getdata();
    {
        cout<<"enter the value of x and y";
        cin>>x>>y;
    }
    void selectdata();
    {
        cout<<"press 1.sum,2.diff,3.multi,4.divide,5.exit";
        cin>>ch;
    }
    void processdata();
    {
        switch(ch)
        {
        case 1:
            cout<<"sum is="<<x+y<<endl;
            break;
        case 2:
            cout<<"diff is="<<x-y<<endl;
            break;
        case 3:
            cout<<"multi is="<<x*y<<endl;
            break;
        case 4:
            cout<<"divide is="<<x/y<<endl;
            break;
        case 5:
            exit(0);
        default:
            cout<<"invalid choice";
    }
};
void main()
{
    calcularor val;
    val.getdata();
    val.selectdata();
    val.processdata();
    clrscr();
    getch();
}
