#include<iostream>
using namespace std;
class bed{
    private:
    int height=10;
    friend void display(bed obj);
};
void display(bed obj)
    {
        cout<<"HEIGHT::"<<obj.height;
    }
int main(){
    bed obj_bed;
    display(obj_bed);
    return 0;
}