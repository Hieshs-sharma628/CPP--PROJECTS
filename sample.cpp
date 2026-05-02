#include<iostream>
#include<string.h>
using namespace std;
void display(student s[],int n);

struct student{
    int roll;
    string name;
    int marks;
};
int main(){
    int n;
    cout<<"Enter the numbers of students::"<<endl;
    cin>>n;
  struct student s[n]; 
  for(int i=0;i<n;i++){
    cout<<"Enter name of student "<<i+1<<"::"<<endl;
    cin>>s[i].name;
    cout<<"Enter Roll number of student "<<i+1<<"::"<<endl;
    cin>>s[i].roll;
    cout<<"Enter marks of student "<<i+1<<"::"<<endl;
    cin>>s[i].marks;
  } 
  display(s,n);
  return 0;
}

void display(student s[],int n){
    for(int i=0;i<n;i++){
    cout<<"Name of student "<<i+1<<"::"<<s[i].name<<endl;
    cout<<"Roll number of student "<<i+1<<"::"<<s[i].roll<<endl;
    cout<<"Marks of student "<<i+1<<"::"<<s[i].marks<<endl;
    } 
}