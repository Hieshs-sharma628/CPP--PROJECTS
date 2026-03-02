#include<iostream>to assing member fuction to using pointe strctur operator
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
    return 0;
}