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
    float showArea(){
       return width*height;
        
    }
    void showPARE(){
        int paremeter= 2*(width*height);
        cout<<"paremeter:"<<paremeter<<endl;
        
    }
};

int main(){

    int x;
    float y;
    float a;
    cout<<"enter x and y"<<endl;
    cin>>x>>y;
    rectangle rec1;
    rec1.getdata(x,y);
    a=rec1.showArea();
    cout<<"area:"<<a<<endl;
    rec1.showPARE();
}