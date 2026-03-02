#include<iostream>
using namespace std;
class computer{
    public:
        string brand;
        int price;
        computer(){
            cout<<"hello i am constructor"<<endl;
        }
};
int main(){
    computer pc;
    computer *ptr=&pc;
    ptr->brand="hp";
    ptr->price=1000000;
    cout<<"Brand name::"<< ptr->brand<<endl;
    cout<<"Price of computer"<<ptr->price;
    return 0;
}