#include<iostream>
#include<string>
using namespace std;
class house{
    private:
        int house_no;
        string name;
    public:
        void getdata(){
            cout<<"Enter the house number:"<<endl;
            cin>>house_no;
            cout<<"Enter the name of owner"<<endl;
            cin>>name;
        }
        void display(){
            cout<<"HOUSE NEMBER :"<<house_no<<endl;
            cout<<"NAME OF OWNER :"<<name<<endl;
        }
};
int main()
{
    house h1,h2;
    h1.getdata();
    h1.display();
    //object 2
    cout<<endl;
    h2.getdata();
    h2.display();

return 0;
}
