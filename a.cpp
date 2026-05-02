#include<iostream>
using namespace std;
class A{
int value;
public:
A(int v){
value=v;
}
int getvalue(){
return value;
}
};
class B{
int data;
public:
B(A obj){
data=obj.getvalue();
}
void display(){
cout << "The Data is "<< data;
}
};
int main(){
A a(10);    
B b(a);
b.display();
return 0;
}