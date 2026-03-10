#include<iostream>
using namespace std;
class bed{
    private:
    int height=10;
    friend class tablelamp;
};
class tablelamp{
    public:
    void display(bed obj){
        cout<<"HEIGHT::"<<obj.height;
    }
};
int main(){
    bed obj_bed;
    tablelamp obj_tablelamp;
    obj_tablelamp.display(obj_bed);
    return 0;
}