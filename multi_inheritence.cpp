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
class physical{
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
};
class showinfo : public person,public physical{
    public:
   void display(){
    cout<<"       Your information"<<endl;
    cout<<"Your name is::"<<name<<endl;
    cout<<"Your rollno is::"<<roll<<endl;
    cout<<"Your height is::"<<height<<endl;
    cout<<"Your weight is"<<weigth<<endl;
    } 
};
int main(){
    showinfo s;
    s.getdata();
    s.getphysical();
    s.display();
    return 0;
}
