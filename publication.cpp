#include<iostream>
using namespace std;
class publication{
    private:
        string title;
        float price;
    public:
        void getdata(){
            cout<<"Enter the tilte of the Book::"<<endl;
            cin>>title;
            cout<<"Enter the price of the Book::"<<endl;
            cin>>price;
        }
        void show(){
            cout<<"Title of book::"<<title<<endl;
            cout<<"Price of book::"<<price<<endl;
        }
};
class book : public publication{
    private:
        int page_count;
    public:
        void getdata1(){
            getdata();
            cout<<"Enter the page count of the Book::"<<endl;
            cin>>page_count;
            
        }
         void show1(){
            show();
            cout<<"Pages count of book::"<<page_count<<endl;
            
        }
};
class tape : public publication{
    private:
        float audio_time;
    public:
        void getdata2(){
            cout<<"Enter the audio time of the Book::"<<endl;
            cin>>audio_time;
            
        }
         void show2(){
            cout<<"Audio time of book::"<<audio_time<<endl;
        }
};
int main(){
    book b;
    b.getdata1();
    b.show1();
    tape t;
    t.getdata2();
    t.show2();
    return 0;
}