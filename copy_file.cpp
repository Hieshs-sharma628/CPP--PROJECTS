#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fp("welcome.txt");
    ofstream fpo("copy.txt");
    string data;
    if(!fpo)
    {
        printf("\nFIle not exist !!!!");
    }
    else{
        while(getline(fp,data)){
            fpo<<data<<endl;
        }
        cout<<"File copying Sucessfully comple";
    }
    fp.close();
    fpo.close();
    return 0;
}
