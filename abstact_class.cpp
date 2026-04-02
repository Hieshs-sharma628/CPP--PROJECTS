#include<iostream>

using namespace std;
class shape{
    public:
        void info(){
            cout<<"This is base class"<<endl;
        }
        virtual void draw()=0;
        virtual~shape(){};
};
class car : public shape{
    public:
        void draw(){
            cout<<"This is my car"<<endl;
        }
};
class rectangle : public shape{
    public:
        void draw()override{ 
            cout<<"This is rectangle class"<<endl;
        }
    };
class square : public shape{
    public:
        void draw()override{
            cout<<"This is square class"<<endl;
        }
};
int main()
{
  shape *s1=new rectangle();
  shape *s2=new square();
  s1->info();
  s1->draw();
  
  s2->info();
  s2->draw();
  delete s1;
  delete s2;
}