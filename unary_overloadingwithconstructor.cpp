#include<iostream>
using namespace std;
class number{
    private:
        int x,y,z;
    public:
        number(int x,int y,int z){
            this->x=x;
            this->y=y;
            this->z=z;
        }
        void operator-()
        {
        x=-x;
        y=-y;
        z=-z;
        }
        void show()
        {
            cout<<"The value of x is ="<<x<<endl;
            cout<<"The value of y is ="<<y<<endl;
            cout<<"The value of z is ="<<z<<endl;
        }
};
int main()
{
    int x,y,z;
    cout<<"Enter the value of X::";
    cin>>x;
    cout<<"Enter the value of Y::";
    cin>>y;
    cout<<"Enter the value of Z::";
    cin>>z;
    number obj(x,y,z);
        -obj;
        obj.show();
    return 0;
}