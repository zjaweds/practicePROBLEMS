#include<iostream>

using namespace std;

class crawlers{
    int wheels;
    protected:
    int age;
    public:
    crawlers(int w,int a){
        wheels=w;
        age=a;
    }
};
class flyers{
    int takeOffSpeed;
    protected:
    int thrust;
    public:
    flyers(int tos,int t){
        takeOffSpeed=tos;
        thrust=t;
    }
};

class aircraft:public crawlers,public flyers{//Inheriting from both the classes as public
    int angleOfTakeOff;
    public:
    aircraft(int a,int c,int f):crawlers(f, c),flyers(c,f){
        angleOfTakeOff=a;//Protected members accessible within the inherited class
    }
    void showAirAttributes(){
        cout<<"Angle of take off: "<<angleOfTakeOff<<"\t Thresold Thrust: "<<thrust;
        cout<<"\tAge of the Aircraft: "<<age<<endl;
    }
};

int main(){
    aircraft a(13,23,3419);
    a.showAirAttributes();
    return 0;
    }