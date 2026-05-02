#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string data;
    ifstream finput;
    ofstream foutput;
    foutput.open("welcome.txt",ios :: out);
    cout<<"\nfile open sucessfully";
    foutput<<"This is file handling concept\nwe use fstream hesder file for this";
    cout<<"\nData is written sucessfully";
    foutput.close();
    finput.open("welcome.txt");
    if(!finput)
    {
        cout<<"File dose not exist!!";
    }
    else{
        while(getline(finput,data))
        {
            cout<<data;
        }
    }
    finput.close();
    return 0;
}