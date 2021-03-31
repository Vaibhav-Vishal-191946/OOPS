/*Write a class ACCOUNT that represents your bank account and then use it.
The class should allow you to deposit money, withdraw money, calculate interest, send a message if you have insufficient balance.*/
#include<iostream>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;
class account {
private:
int acc_no;
string name;
unsigned long long int aadhar,mobile;
int age;
float bal;
string ifsc,branch_code;
public:
	account(){
		cout<<"\nName :";
      	getline(cin,name);
		cout<<"Age :";
      	cin>>age;
		cout<<"Aadhar Number :";
      	cin>>aadhar;  
      	cout<<"Mobile number :";
      	cin>>mobile;
      	ifsc="ABCN0001234";
      	branch_code="6798";
      	display_accno();
		bal=0;
		cout<<"\nCurrent balance : "<<bal;
	}
	void display_accno(){
    cout<<"////////////////////////////////////////////////////////////////"<<endl;
    cout<<"            Your account has been successfully created          "<<endl;
    cout<<"////////////////////////////////////////////////////////////////"<<endl;
    cout<<"Account no : "<< acc_no;
	cout<<"\nIFSC : "<< ifsc<<"\nBranch code : "<< branch_code;
  	}
    void setacc_no(){
        acc_no=acno();
    }
	int acno(){
		int acno;
		srand((unsigned) time(0));
		acno=(rand()%100000000)+10000000;
		return acno;
	}
	void getbalance() {
		cout<<"Your Current Balance :"<<bal;
	}
	void display_acc_details(){
        cout<<"\n~~~~~~~~~~~~~~~~~ Account Details ~~~~~~~~~~~~~~~~~"<<endl;
		 cout<<"\nName :"<<name<<"\nAadhar Number :"<<aadhar<<"\nMobile Number :"<<mobile<<"\nAccount Number :"<<acc_no; 
		 cout<<"\nIFSC : "<< ifsc<<"\nBranch code : "<< branch_code<<"\nAccount Balance :"<<bal;
	}
	void deposit(){
		float dep;
        cout<<"\n~~~~~~~~~~~~~~~~~ Deposit ~~~~~~~~~~~~~~~~~";
		cout<<"\nEnter an amount :";
		cin>>dep;
		bal=bal+dep;
		getbalance();
	}
	void withdraw(){
		float wit;
        cout<<"\n~~~~~~~~~~~~~~~~~ Withdrawl ~~~~~~~~~~~~~~~~~";
		cout<<"\nEnter an amount : ";
		cin>>wit;
		if(wit<=bal){
			bal=bal-wit;
			getbalance();
		}
		else
		cout<<"Insufficient Balance";
	}
	void interest(){
		float rate=6.5;
		float amount,interest;
		int time=1;
		amount=bal * (pow((1 + rate / 100), time));
		interest=amount-bal;
		cout<<"Interest : "<<interest;
	}
};
int main() {
	int n=0;
	cout<<"///////////////////////////////////////////////////////////////"<<endl;
	cout<<"                         WELCOME TO ABC                        "<<endl;
	cout<<"///////////////////////////////////////////////////////////////"<<endl;
	cout<<"\t\t\tNew user detected \nCreating a new Account :"<<endl;
	cout<<"\nPlease Enter following details : ";
  	account customer1;
  while(n !=6)
  {
    cout<<"\n\nYour Transaction :\nPress 1 : For Account_details\nPress 2 : Current Balance\nPress 3 : Deposit Money ";
	cout<<"\nPress 4 : Withdraw Money \nPress 5 : Calculate Interest \nPress 6 : Logout \n";
    cin>>n;
    switch(n)
    {
      case 1:
      customer1.display_acc_details();
      break;
	  case 2:
	  customer1.getbalance();
	  break;
      case 3:
      customer1.deposit();
      break;
      case 4:
      customer1.withdraw();
      break;
      case 5:
      customer1.interest();
      break;
      case 6:
      return 0;
      break;
    }
  }
   return 0;
}
