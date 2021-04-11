#include<iostream>
using namespace std;
class account{
	protected:
	char cust_name[50];
	int acc_num ;
	char type[50];
		
		
};
class cur_acc:public account{
	int amount;
		public:
		void amoun_t()
		{
		cout<<"enter deposit";
		cin>>amount;
	}
		void show()
		{
			cout<<amount;
			}	
	
};
class sav_acc:public account{
	
};
int main()
{
	cur_acc c;
	c.amoun_t();
	c.show();
	
	
}
