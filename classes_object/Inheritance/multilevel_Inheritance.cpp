#include<iostream>
using namespace std;

class A{
    protected:
    int roll;
    public:
    void getroll(){
        cout<<"enter roll "<<endl;
        cin>>roll;
    }
    void putroll(){
        cout<<"\n\nroll: "<<roll<<endl;
    }
};

class B: public A{
    protected:
    int sub1, sub2;
    public:
    void getmarks(){
        cout<<"enter marks of sub1 and sub2"<<endl;
        cin>>sub1>>sub2;
    }
    void putmarks(){
        cout<<"marks of sub1:"<<sub1<<"\nmarks of sub2:"<<sub2<<endl;
    }
};

class C:public B{
    protected:
    int sportsMarks;
    public:
    void getSportsM(){
        cout<<"enter sports marks"<<endl;
        cin>>sportsMarks;
    }
    void putSportsM(){
        cout<<"sportsMarks:"<<sportsMarks;
    }
    void Total(){
      putroll();
      putmarks();
      putSportsM();

      cout<<"\ntotal marks:"<<sub1+sub2+sportsMarks<<endl;
      
    }
};


int main(){
    C obj;
    obj.getroll();
    obj.getmarks();
    obj.getSportsM();
    obj.Total();
}