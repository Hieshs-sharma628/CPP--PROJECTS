#include<iostream>
using namespace std;
class A{
    private:
        int len,bre;
    public:
        void getdata(){
        cout<<"Enter the value of lenght::";
        cin>>len;
        cout<<"Enter the value of breadth::";
        cin>>bre;
        }
        void operator ++(int)
        {
        len=len+1;
        bre=bre+1;
        }
         void operator --(int)
        {
        len=len-1;
        bre=bre-1;
        }
        void area()
        {
        cout<<"Area is ="<<len*bre<<endl;
        }
};
int main()
{
    A obj;
        obj.getdata();
        obj.area();
        obj++;
        obj.area();
        obj--;
        obj.area();
    return 0;
}