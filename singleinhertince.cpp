#include<iostream>
using namespace std;
class person
{
    protected:
    string name;
    int roll;
    public:
    void getdata(){
        cout<<"Enter your name::";
        cin>>name;
        cout<<"Enter your Roll number::";
        cin>>roll;
    }
};
class physical : public person{
    protected:
    float height;
    float weigth;
    public:
void getphysical()
{
        cout<<"Enter your height::";
        cin>>height;
        cout<<"Enter your weigth::";
        cin>>weigth;
}
void display(){
    cout<<"           Your information"<<endl;
    cout<<"Your name is::"<<name<<endl;
    cout<<"Your rollno is::"<<roll<<endl;
    cout<<"Your height is::"<<height<<endl;
    cout<<"Your weight is"<<weigth<<endl;
}
};
int main(){
    physical p;
    p.getdata();
    p.getphysical();
    p.display();
    return 0;
}