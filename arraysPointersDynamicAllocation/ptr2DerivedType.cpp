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
    derived d[3];
    b=d;
    d[0].setFloor(2);
    d[1].setFloor(5);
    //b->setFloor(4);
    ((derived *)b)->setRooms(25);/*We can't access members of derived class directly 
    through pointer to the base class without typecasting*/
    cout<<((derived *)b)->getRooms()<<endl;
    cout<<b->getFloor();
    b++;
    cout<<endl<<b->getFloor();/*It is returning garbage value instead of 5 because after pointer increment it points
    to the next object of the base class*/

    /*Apart from abovementioned pointer arithmetic occurs according to the base class
    that increment to the pointer causes it to point the next object of the base class 
    rather than the derived class therefore it creates problems if not handled properly*/
    return 0;
}