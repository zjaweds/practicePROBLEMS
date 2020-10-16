#include<iostream>

using namespace std;

class crawlers{
    int wheels;
    protected:
    int age;
    public:
    crawlers(){
        cout<<"Crawlers Constructor"<<endl;
    }
    ~crawlers(){
        cout<<"Crawlers Destructor"<<endl;
    }
};
class flyers{
    int takeOffSpeed;
    protected:
    int thrust;
    public:
    flyers(){
        cout<<"Flyers Constructor"<<endl;
    }
    ~flyers(){
        cout<<"Flyers Destructor"<<endl;
    }
    };

class aircraft:public flyers,public crawlers{//Inheriting from both the classes as public
    int angleOfTakeOff;/*Order of calling destructor of base classes vary according to
    their order of inheritance order will change if class aircraft:public crawlers,public flyers
    had been the order of aircraft class definition*/
    public:
    aircraft(){
        cout<<"Aircraft's Constructor"<<endl;
    }
    ~aircraft(){
        cout<<"Aircraft's Destructor"<<endl;
    }
    };

int main(){
    aircraft a;
    return 0;
    }