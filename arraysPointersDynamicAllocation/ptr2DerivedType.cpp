#include<iostream>

using namespace std;

class base{
    int floor;
    public:
    void setFloor(int i);
    int getFloor(); 
};
void base::setFloor(int i){
    floor=i;
}
int base::getFloor(){
    return floor;
}

class derived:public base{
    int rooms;
    public:
    void setRooms(int i);
    int getRooms();
};
void derived::setRooms(int i){
    rooms=i;
}
int derived::getRooms(){
    return rooms;
}
int main(){
    base *b;
    derived d;
    b=&d;
    b->setFloor(4);
    cout<<b->getFloor()<<"\n";
    ((derived *)b)->setRooms(10);/*We can't access members of derived class directly 
    through pointer to the base class without typecasting*/
    cout<<((derived *)b)->getRooms();

    /*Apart from abovementioned pointer arithmetic occurs according to the base class
    that increment to the pointer causes it to point the next object of the base class 
    rather than the derived class therefore it creates problems if not handled properly*/
    return 0;
}