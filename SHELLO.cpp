#include <iostream>
using namespace std;
class student{
    public:
        int roll;
        student(int r){
            roll=r;
        }
        void display(){
            cout<<"ROLL NUMBER Of student is :: "<<roll<<endl;
        }
};
int main(){
    student obj(10);
    student obj2=obj;
    obj.display();
    obj2.display();
    return 0;
}