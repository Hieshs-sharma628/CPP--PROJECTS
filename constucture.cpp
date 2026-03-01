// This program demonstrates the use of constructors in C++.@tag:nextEditSuggestions
#include<iostream>
using namespace std;
class book{
    private:
        string name;
        int id;
        string author;
    public:
        book(){
            cout<<"Hello, here is your default constructor!"<<endl;
        }    //make deafault constucture
        book(string n,string a,int i);//parameterized constuctor
};
book :: book(string n,string a,int i){
    name=n;
    author=a;
    id=i;
    cout<<"Name   ::"<<name<<endl;
    cout<<"Author ::"<<author<<endl;
    cout<<"Book ID::"<<id<<endl;
}
int main(){
    book b1;
    book b2("The Great Gatsby","F. Scott Fitzgerald",45045);
    return 0;
}