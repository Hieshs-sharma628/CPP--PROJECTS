#include<iostream>
using namespace std;
class A{
public:
int x;
};
int main(){
    A obj1;
    obj1.x=10;
    A obj2=obj1;
    cout << "The value of obj1:" << obj1.x;
    cout << "\nThe value of obj2:" << obj2.x;
    return 0;
}