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
  shape *shape[]={new rectangle(),new square()};
  for(int i=0;i<2;i++){
    shape[i]->draw();
  }
}