#include<iostream>

using namespace std;

template <class crawlers> void sum(crawlers x, crawlers y){
    cout<<(x+y)<<endl;
}
template <class crawlers,class flyers> void product(crawlers x, flyers y){
    cout<<(x*y)<<endl;
}

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

int main(){
    sum(10,20);
    product(10,20);
    sum('a','b');
    return 0;
    }