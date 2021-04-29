//accept deposit and update balance//
//display balance
//compute and deposit interest
//permit withdrawl and update balance
//check minimum balance, impose penalty, and update balance
#include<iostream>
using namespace std;

class account
{
	protected:
		long  balance;
	char cust_name[50];
	int acc_num ;
	char type[50];
	void getdata();////////////////////////////// take customers info 
	void display_data();/////////////////////////////show customers info
	
};

	void account::getdata()
	{
		cout<<"enter the customer's name";
		cin>>cust_name;
		cout<<"Enter the account number";
		cin>>acc_num;
		cout<<"enter the account type";
		cin>>type;
	}
	
	void account::display_data()
	{
		cout<<"\nCustomer name:  "<<cust_name;
		cout<<"\nAccount number: "<<acc_num;
		cout<<"\nAccount type:   "<<type;
	}
//end of base class	
class cur_acc:public account
{
	int amount;
		public:
			void min_balance();
		void deposit();////////////////////accept deposit
		void show_deposit();
	
};

void cur_acc:: deposit()
    {

        long amt;
        cout << "Enter Amount U want to deposit? ";
        cin >> amt;
        balance = balance + amt;
    }
    //end of second derived class
class sav_acc:public account
{
	public:
		void CI();
		void withdrawal();///////////////////////////withdrawal
	
};

void withdrawal()
    {
        long amt;
        cout << "Enter Amount U want to withdraw? ";
        cin >> amt;
        if (amt <= balance)
            balance = balance - amt;
        else
            cout << "Less Balance..." << endl;
    }
     //end of third derived class   
int main()
{
	cur_acc cur_acc_obj;
	sav_acc sav_acc_obj;
	do
	{
		system("cls");
		cout<<"\n\n\n\tMAIN MENU";
		cout<<"\n\n\t01. display balance";
		cout<<"\n\n\t02. DEPOSIT AMOUNT";
		cout<<"\n\n\t03. WITHDRAW AMOUNT";
		cout<<"\n\n\t04. compute interest";
		cout<<"\n\n\t05. EXIT";
		cout<<"\n\n\tSelect Your Option (1-5) ";
		cin>>ch;
		system("cls");
		switch(ch)
		{
		case '2':
			cur_acc_obj.deposit();
			break;
		case '1':
		  
		  
			break;
		case '3':
		sav_acc_obj.withdrawal();
			
			break;
		case '4': 
			sav_acc_obj.CI();
			break;
		case '5':
		     cout<<"thank you";
			break;
		 default :cout<<"\a";
		}
	
	
}
