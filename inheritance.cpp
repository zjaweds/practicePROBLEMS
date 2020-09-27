#include<iostream>

using namespace std;

class building{
    int rooms;
    int floors;
    int area;
    public:
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
class house : public building{
    int bedRooms;
    int baths;
    public:
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
class school : public building{
    int classRoom;
    int offices;
    public:
    void setClassRoom(int num);
    int getClassRoom();
    void setOffices(int num);
    int getOffices();
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

int main(){
    house h;
    school s;
    h.setRooms(12);
    h.setFloors(3);
    h.setArea(4500);
    h.setBedRooms(5);
    h.setBaths(3);

    cout<<" House has "<<h.getBedRooms()<<" bedrooms"<<endl;

    s.setRooms(200);
    s.setClassRoom(180);
    s.setOffices(5);
    s.setArea(25000);
    s.setFloors(10);

    cout<<"School has "<<s.getRooms()<<" rooms"<<endl;
    cout<<"School has "<<s.getClassRoom()<<" class rooms"<<endl;
    cout<<"School has "<<s.getOffices()<<" offices"<<endl;
    cout<<"School has "<<s.getArea()<<" area"<<endl;
    cout<<"School has "<<s.getFloors()<<" floors"<<endl;
    return 0;
    }