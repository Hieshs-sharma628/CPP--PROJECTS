#include<iostream>
using namespace std;
class Complex{
    int real,img;
    public:
        Complex(){
            real=0;
            img=0;
        }
        Complex(int real,int img)
        {
            this->real=real;
            this->img=img;
        }
        void display(){
            cout<<real<<"+"<<img<<"i"<<endl;
        }
        Complex operator + (const Complex& c2) const {
            Complex c3;
            c3.real=real+c2.real;
            c3.img=img+c2.img;
            return c3;
        }

};
int main(){
    Complex c1(2,3);
    Complex c2(3,4);
    Complex c3;
    c3=c1+c2;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}