#include<iostream>
using namespace std;
class A
{
    public:
    void show(){
        cout<<"This is base class fuction"<<endl;
    }
};
class B : public A{
public:
    void show()//overridding function
    {
            cout<<"This is drived class fuction"<<endl;
    }
};
int main(){
    B obj,obj2;
    obj.show();//it display drives class fuction 
    obj2.A :: show();//access based class function
    return 0;
}