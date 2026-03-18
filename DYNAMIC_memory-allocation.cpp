#include<iostream>
using namespace std;
class computer{
    public:
        string brand;
        computer(){
            cout<<"hello i am constructor"<<endl;
        }
        void getdata(){
            cout<<"Enter your brand of computer::"<<endl;
            cin>>brand;
        }
        void putdata(){
            cout<<"Brand name::"<<brand<<endl;
        }
};
int main(){
    computer *ptr=new computer;
    ptr->getdata();
    ptr->putdata();
    delete ptr;
    return 0;
}