#include<iostream>
using namespace std;

class Shape{
    public:
    void draw(){
        cout<<"draw a shape"<<endl;
    }
};

class Circle:public Shape{
    public:
     void drawCircle(){
    cout<<"draw a circle"<<endl;
    }
};

int main(){
    Circle myCircle;
    myCircle.draw();
    myCircle.drawCircle();
    return 0;
}