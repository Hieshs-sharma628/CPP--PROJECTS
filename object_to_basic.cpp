#include <iostream>
using namespace std;
class student{
    int roll;
    public:
        student(int r){
            roll=r;
        }
        operator int(){
            return roll;
        }
};
int main(){
    int rollno;
    student obj(20);
    rollno=obj;
    cout<<"ROLL NUMBERS Of student is :: "<<rollno;
    return 0;
}