#include<iostream>
#include<ctime>

using namespace std;
class atm{
	public:
		
		void display()
		{
			cout<<"\t\t\t\tWELCOME TO ATM"<<endl;
		}
	
		void date()
		{
			
            time_t now = time(0);
            tm* localTime = localtime(&now);

            cout << "\t\tCurrent Date and Time: ";
            cout << (localTime->tm_year + 1900) << '-' 
                 << (localTime->tm_mon + 1) << '-'
                 << localTime->tm_mday << ' '
                 << localTime->tm_hour << ':'
                 << localTime->tm_min << ':'
                 << localTime->tm_sec <<endl;
		}
		
		void pin()
		{
			int correctPin=1234;
			int choose,enteredPin;
			cout<<"1.Access Your Account Via Pin Number"<<endl;
			cout<<"0.Enter to get help"<<endl;
			cin>>choose;
			
			switch(choose)
			{
				case 1:cout<<"\t\t\t\tATM ACCOUNT ACCESS"<<endl;
				       cout<<"\tEnter Your Acc Pin Access Number![Only one attempt is allowed]"<<endl;
				       cin>>enteredPin;
				       if (enteredPin==correctPin)
					   {
                        cout<<"PIN is correct.Access granted!"<<endl;
                       }
					   else 
					   {
                        cout<<"You had made your attempt which failed!!No more attempt allowed!!Sorry!!"<<endl;
				       }
	                   break;
	            case 0:cout<<"\t\t\t\tTHANK YOU"<<endl;
	                   break;
		
	        }
	    }
	    
	    void mainscreen()
	    {
	    	int a,atm,enteramount,num1,num2;
	    	cout<<"\t\t\t\tATM MAIN MENU SCREEN"<<endl;
	    	cout<<"\t\t\t1.To Deposit Cash"<<endl;
	    	cout<<"\t\t\t2.To Withdraw Cash"<<endl;
	    	cout<<"\t\t\t3.To Balance Inquiry"<<endl;
	    	cout<<"\t\t\t4.To Exit Atm"<<endl;
	    	cin>>atm;
	    	
	    	switch(atm)
	    	{
	    		case 1:cout<<"\t\t\t\tATM ACCOUNT DEPOSIT SYSTEM"<<endl;
	    		       cout<<"The Names of the Account Holder are: Henil Patel"<<endl;
	    		       cout<<"The Account Holder's address is: Gujarat"<<endl;
	    		       cout<<"The Branch location is: Atladara"<<endl;
	    		       cout<<"Account Number: 5021"<<endl;
	    		       cout<<"Present available balance: Rs.50000"<<endl;
	    		       cout<<"Enter the Amount to be Deposited:"<<endl;
                       cin>>num2;
                       cout<<"Your Balance:"<<50000+num2<<endl;
                       cout<<"Thank You"<<endl;
                       break;
                case 2:cout<<"\t\t\t\tATM Account Withdraw"<<endl;
                       cout<<"The Names of the Account Holder are: Henil Patel"<<endl;
	    		       cout<<"The Account Holder's address is: Gujarat"<<endl;
	    		       cout<<"The Branch location is: Atladara"<<endl;
	    		       cout<<"Account Number: 5021"<<endl;
	    		       cout<<"Insufficient Available Balance in your Account"<<endl;
	    		       cout<<"\t\t\tSorry  !!"<<endl;
	    		       break;
	    		case 3:cout<<"\t\t\t\tATM Account Balance Inquiry"<<endl;
				       cout<<"Your Balance:50000"<<endl;
					   break;
			    case 4:cout<<"You just exit the ATM "<<endl;
				       break;		         
			}
		}
	
};
int main()
{
	atm a1;
    
	a1.display();
    a1.date();
    a1.pin();
    a1.mainscreen();
}
