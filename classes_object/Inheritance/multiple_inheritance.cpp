#include<iostream>
using namespace std;

class Shape{
    public:
    void draw(){
        cout<<"draw a shape"<<endl;
    }
};

class Color{
    public:
    string color;
     void setColor(string color){
      cout<<"color is seted"<<endl;
    }
};

class displayColor{
    public:
    void DisplayColor(){
        cout<<"color :red"<<endl;
    }
    
};

class colorShape:public Shape,public Color,public displayColor {
    public:
    void drawColorShape(){
        cout<<"drawing a colored shape"<<endl;
    }
};


int main(){
    colorShape myColorShape;
    myColorShape.draw();
    myColorShape.setColor("red");
    myColorShape.DisplayColor();
    myColorShape.drawColorShape();
    return 0;


}