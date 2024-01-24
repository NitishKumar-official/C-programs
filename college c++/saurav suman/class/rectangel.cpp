#include<iostream>
using namespace std;

class rectangle{
    private:
    int width;
    float height;
    public:
    void getdata(int a, float b){
        width=a;
        height=b;
    }
    void showArea(){
       int area=width*height;
         cout<<"Area:"<<area<<endl;
    }
    void showPARE(){
        int paremeter= 2*(width*height);
        cout<<"paremeter:"<<paremeter<<endl;
        
    }
};

int main(){

    int x;
    float y;
    cout<<"enter x and y"<<endl;
    cin>>x>>y;
    rectangle rec1;
    rec1.getdata(x,y);
    rec1.showArea();
    rec1.showPARE();
}