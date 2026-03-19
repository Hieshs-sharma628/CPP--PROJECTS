#include<iostream>
using namespace std;
class A{
    private:
        int x;
    public:
        void getdata(){
        cout<<"Enter the value of X::";
        cin>>x;
        }
        void operator-()
        {
        x=-x;
        }
        void show()
        {
        cout<<"The value of x is ="<<x;
        }
};
int main()
{
    A obj;
        obj.getdata();
        -obj;
        obj.show();
    return 0;
}