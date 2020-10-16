/*
Through access grant declaration we can't raise or lower the access right in the base
class as well as in the derived class


base_class :: member_name

Even for functions no parenthesis is required
*/


#include<iostream>

using namespace std;

class building{
    int rooms;
    int floors;
    protected:
    int area;//As it is protected it can be iherited by derived classes
    public:
    int id;
    void setRooms(int num);
    int getRooms();
    void setFloors(int num);
    int getFloors();
    void setArea(int num);
    int getArea();
};

void building ::setRooms(int num){
    rooms=num;
}
int building::getRooms(){
    return rooms;
}
void building:: setFloors(int num){
    floors=num;
}
int building ::getFloors(){
    return floors;
}
void building:: setArea(int num){
    area=num;
}
int building ::getArea(){
    return area;
}
class house : private building{//All members of the building class have become private members of the house class
    int bedRooms;
    int baths;
    public:
    building :: id;//Making id accessible publically although inherited private
    void setBedRooms(int num);
    int getBedRooms();
    void setBaths(int num);
    int getBaths();
};
void house ::setBedRooms(int num){
    bedRooms=num;
}
int house :: getBedRooms(){
    return bedRooms;
}
void house ::setBaths(int num){
    baths=num;
}
int house ::getBaths(){
    return baths;
}
class school : public building{//Private members of base still private to base public members have become public here too
    int classRoom;
    int offices;
    public:
    void setClassRoom(int num);
    int getClassRoom();
    void setOffices(int num);
    int getOffices();
    void setSchoolArea(int num);//Accessible as it is a protected member so it is inherited
};
void school::setClassRoom(int num){
    classRoom=num;
}
int school :: getClassRoom(){
    return classRoom;
}
void school :: setOffices(int num){
    offices=num;
}
int school :: getOffices(){
    return offices;
}
void school::setSchoolArea(int num){//Accessible as it is a protected member so it is inherited
    area=num;
}
class bunglow:protected building{//Private members still private public as well as protected members of the base class are now protected member of this class.
    int hall;
    public:
    void setHall(int n){hall=n;}
    void setBunglowArea(int n){
        area=n;
    }
    void showHall(){
        cout<<"No. of halls is: "<<hall<<endl;
    }
    void showBunglowArea(){
        cout<<"Area of the bunglow is: "<<area<<endl;
    }
};

int main(){
    house h;
    school s;
    bunglow b;
/*
    h can't access members of the building class as house is inherited as private
    so all private as well as public members of the building class have become 
    private member of the house class so all public members of building class
    are accessible within the house class only
    h.setRooms(12);
    h.setFloors(3);
    h.setArea(4500);

*/
    h.setBedRooms(5);
    h.setBaths(3);

    cout<<" House has "<<h.getBedRooms()<<" bedrooms"<<endl;

    s.setRooms(200);
    s.setClassRoom(180);
    s.setOffices(5);
    s.setSchoolArea(25000);
    s.setFloors(10);

    cout<<"School has "<<s.getRooms()<<" rooms"<<endl;
    cout<<"School has "<<s.getClassRoom()<<" class rooms"<<endl;
    cout<<"School has "<<s.getOffices()<<" offices"<<endl;
    cout<<"School has "<<s.getArea()<<" area"<<endl;
    cout<<"School has "<<s.getFloors()<<" floors"<<endl;
    b.setHall(10);
    b.showHall();
    b.setBunglowArea(20000);
    b.showBunglowArea();
    h.id=321;// Possible because of the statement building::id in house class public
    cout<<h.id;// Possible because of the statement building::id in house class public
    return 0;
}