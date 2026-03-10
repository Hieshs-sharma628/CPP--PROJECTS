#include <iostream>
using namespace std;
class box{
    public:
        int capacity=500;
};
void change(box b1)
{//obj as passed by value
b1.capacity=700;
}
void reintilize(box &b2){//pass by reference 
    b2.capacity=0;
}
void add_capacity(box* b3){//pass by address
    b3->capacity+=1000;
}
int main(){
    box obj1/*for pass by value*/,obj2/*for pass by reference*/,obj3/*for pass by address*/;
    change(obj1);
    cout<<"Capacity of box::"<<obj1.capacity<<endl;
    reintilize(obj2);
    cout<<"reinitlization of capacity::"<<obj2.capacity<<endl;
    add_capacity(&obj3);
    cout<<"Capacity of box after adding::"<<obj3.capacity<<endl;
    
return 0;
}