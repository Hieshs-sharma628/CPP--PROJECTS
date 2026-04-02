//this progrma demondrawes bank account deails of multiple users
#include<iostream>
using namespace std;
class bank_details{
    private:
        string name;
        int account_no;
        int balance;
        int amount;
    public:
        void getdata(){
            cout<<"Enter the balance of user::"<<endl;
            cin>>balance;
            cout<<"Enter the name of user::"<<endl;
            cin>>name;
            cout<<"Enter the account number of user::"<<endl;
            cin>>account_no;
        }   
        void display(){
            cout<<"DETAILS:-"<<endl;
            cout<<"NAME OF ACCOUNT HOLDER   ::"<<name<<endl;
            cout<<"ACCOUNT NUMBER           ::"<<account_no<<endl;
            cout<<"TOTAL BALANCE            ::"<<balance<<endl;
        }   
        void deposit(){
            cout<<"Enter the amount to deposit ::"<<endl;
            cin>>amount;
            balance+=amount;
            cout<<"Present amount after deposite is ="<<balance<<endl;
        }    
        void withdraw(){
            cout<<"Enter the amount to withdrawal::"<<endl;
            cin>>amount;
            balance-=amount;
            cout<<"Present amount after withdrawal is ="<<balance<<endl;
        }    
};
int main(){
    int n;
    bank_details person[n];
    cout<<"Enter the numbers of person::"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        person[i].getdata();
        person[i].display();
        person[i].deposit();
        person[i].withdraw();
    }
    return 0;
}