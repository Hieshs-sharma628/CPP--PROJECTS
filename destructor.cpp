//this progrma demonstrates the use of destructor
#include<iostream>
using namespace std;
    class table{
        private:
            string brand;
            int price;
            int weight;
        public:
            table(string brand,int price,int weight){
                this->brand=brand;
                this->price=price;
                this->weight=weight;
                cout<<"TABLE INFO"<<endl;
                cout<<"BRAND  ::"<<this->brand<<endl;
                cout<<"PRICE  ::"<<this->price<<endl;
                cout<<"WEIDTH ::"<<this->weight<<endl;
            }
            ~table(){//destructor
                 cout<<"Destructor is called";
            }
    };
int main(){
    table t1("abc",2000,30);
    return 0;
}