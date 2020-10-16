#include<iostream>

using namespace std;

class crawlers{
    int wheels;
    protected:
    int age;
    public:
    void setCAttributes(int w,int a){
        wheels=w;
        age=a;
    }
    void showAttributes(){
        cout<<"Wheels: "<<wheels<<"\t Age: "<<age<<endl;
    }
};
class flyers{
    int takeOffSpeed;
    protected:
    int thrust;
    public:
    void setFAttributes(int tos,int t){
        takeOffSpeed=tos;
        thrust=t;
    }
    void showAttributes(){
        cout<<"Take of speed: "<<takeOffSpeed<<"\t Thrust: "<<thrust<<endl;
    }
};

class aircraft:public crawlers,public flyers{//Inheriting from both the classes as public
    int angleOfTakeOff;
    public:
    void setAirAngle(int a){
        angleOfTakeOff=a;//Protected members accessible within the inherited class
    }
    void showAirAttributes(){
        cout<<"Angle of take off: "<<angleOfTakeOff<<"\t Thresold Thrust: "<<thrust;
        cout<<"\tAge of the Aircraft: "<<age<<endl;
    }
};

int main(){
    crawlers c;
    flyers f;
    aircraft a;
    c.setCAttributes(3,10);
    c.showAttributes();
    f.setFAttributes(292,2329);
    f.showAttributes();
    a.setCAttributes(3,19);//Public member accessible outside the class
    a.setFAttributes(223,3419);
    a.setAirAngle(13);
    a.showAirAttributes();
    return 0;
    }