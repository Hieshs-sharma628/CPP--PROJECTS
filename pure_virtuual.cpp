#include<iostream>
using namespace std;
class shape{
    public:
        virtual void draw()=0;
};
class car : public shape{
    public:
        void draw(){
            cout<<"This is my car"<<endl;
        }
};
class skoter : public shape{
    public:
        void draw(){
            cout<<"This is my skoter"<<endl;
        }
};
int main(){
    shape *ptr;
    car c;
    ptr=&c;
    ptr->draw();
    skoter s;
    ptr=&s;
    ptr->draw();
}