#include<iostream>
using namespace std;
class shape{
    public:
    virtual void calculate(){
        cout<<"this is virtual function"<<endl;
    }
    virtual ~shape(){
        cout<<"this is virtual destructor"<<endl;
    }
};
class rectangle : public shape{
    public:
    int l,b,area;
    void calculate(){
        l=12;
        b=13;
        area=l*b;
        cout<<"The area of rectangle is ::"<<area<<endl;
    }
    ~rectangle(){
        cout<<"this is drived rectangle class deatructor"<<endl;
    }
};
class square : public shape{
    public:
    int s,area;
    void calculate(){
        s=12;
        area=s*s;
        cout<<"The area of square is ::"<<area<<endl;
    }
    ~square(){
        cout<<"this is drived class deatructor"<<endl;
    }
};
int main(){
    shape *ptr;
    rectangle r;
    ptr=&r;
    ptr->calculate();
    square s;
    ptr=&s;
    ptr->calculate();
}
