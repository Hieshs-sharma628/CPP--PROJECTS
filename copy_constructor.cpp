#include<iostream>
using namespace std;
class phone{
    private:
    int model_no;
    string name;
    float price;
    public:
    phone(int m,string n,float p){
        model_no=m;
        name=n;
        price=p;
        cout<<"Model No: "<<model_no<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
    }
    phone(const phone& p){
        cout<<"copy constructor is called"<<endl;
        model_no=p.model_no;
        name=p.name;
        price=p.price;
        cout<<"Model No: "<<model_no<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main(){
    phone p1(4647,"redmi",199999),p2=p1;
  return 0; 
}
