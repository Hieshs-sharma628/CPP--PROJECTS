#include<iostream>
using namespace std;
class bottel{
    private:
        string color;
        int price;
    public:
        static int capacity;//static data member or class member
        
        static void display_capacity(){//static member fuction
            cout<<"Capacity of bottle ::"<<capacity<<endl;
        }
        bottel()
        {
            cout<<"Enter the color of your bottle::"<<endl;
            cin>>color;
            cout<<"Enter the price of your bottel::"<<endl;
            cin>>price;
            cout<<"Color of bottle::"<<color<<endl;
            cout<<"Price of bottle::"<<price<<endl;
        }
};
int bottel :: capacity=500;//initlization of static member
int main()
{
bottel :: display_capacity();//access of class member 
cout<<"Acces of statics member::"<<bottel :: capacity<<endl;
bottel b1;
return 0;
}