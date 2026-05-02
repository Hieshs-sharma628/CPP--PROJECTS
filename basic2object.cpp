#include <iostream>
using namespace std;
class student{
    int roll;
    public:
        student(int r){
            roll=r;
        }
        void display(){
            cout<<"ROLL NUMBERS Of student is :: "<<roll;
        }
};
int main(){
    int rollno=100;
    student obj=rollno;
    obj.display();
    return 0;
}