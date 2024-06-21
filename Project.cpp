#include<iostream>
#include<string>
using namespace std;


class all
{
	string a,b;
	double n;
	public:
		void currency();
		void data_convertor();
		void length();
		void time_convertor();
};


int main()
{
	int num;
	 all a;
    while(1)
    {
    	
    	cout<<"\nPress 1 for Currency convertor\nPress 2 for Data Convertor\nPress 3 for length convertor\nPress 4 for time convertor\nPress 5 for exit\n";
    	cout<<"ENTER=";
    	
    	cin>>num;
    	
    	switch(num)
    	{
    		case 1:
    			a.currency();
    			break;
    			case 2:
    		    a.data_convertor();
				break;		
				case 3:
				a.length();
				break;
				case 4:
				a.time_convertor();
				break;
    			case 5:
    				exit(0);
		}
	}
	
	return 0;
}


void all ::currency()

		{
		system("cls");
		
			cout<<"ENTER INR=";
			cin>>n;
			    cout<<"\t\t\t\tSelect from these currency:\n"<<endl;
    cout<<"American dollar(USD)\tRussian ruble(RUB)\tEuro(EUR)\tJapanese Yen(JPY)\tAustralian dollar(AUD)\n"<<endl;
    cout<<"  British pound(GBP)\tSouth Korean Won(KRW)\n";
    cout<<"\n	\t\t\tEnter your choice(like USD)=";
	cin>>a;
	cout<<endl<<endl;
	cout<<"\t\t\t\t\t\t"<<n<<" INR=";
	if(a == "USD")
	cout<<n*0.0135<<" "<<a;
	else if(a == "RUB")
	cout<<n*0.9771<<" "<<a;
	else if(a == "EUR")
	cout<<n*0.0115<<" "<<a;
	else if(a == "JPY")
	cout<<n*1.5441<<" "<<a;
	else if(a == "AUD")
	cout<<n*0.0185<<" "<<a;
	else if(a == "GBP")
	cout<<n*0.01<<" "<<a;
	else if(a == "KRW")
	cout<<n*15.909<<" "<<a;   
	else
	cout<<"####\n\t\t\t\t\t\tYou entered wrong currency";
		
		cout<<endl<<endl;
		
		}
void all ::data_convertor()
{
	system("cls");
	cout<<"ENTER YOUR CHOISE FROM THESE\n BYTES(B)\t\t\t KILOBYTES(KB)\t\t\tMEGABYTES(MB)\t\t\tGIGABYTES(GB)\n";
	cout<<"ENTER THE UNIT YOU WANT TO CONVERT=";
	cin>>a;
  if(a == "B")  
  {
  	
  	cout<<"ENTER BYTES=";
  	cin>>n;
  	cout<<"\nENTER THE CHOISE=";
  	cin>>b;
  	cout<<"\t\t\t"<<n<<" "<<a<<"=";
  	if(b == "KB")
  	cout<<n/1024<<" "<<b;
  	else if(b == "MB")
  	cout<<n/(1024*1024)<<" "<<b;
  	else if(b == "GB")
  	cout<<n/(1024*1024*1024)<<" "<<b;
  	else
  	cout<<"WRONG CHOISE";
  }
  
  else if(a == "KB")
  {
    cout<<"ENTER KILOBYTES=";
  	cin>>n;
  	cout<<"\nENTER THE CHOISE=";
  	cin>>b;
  	cout<<"\t\t\t"<<n<<" "<<a<<"=";
  	if(b == "B")
  	cout<<n*1024<<" "<<b;
  	else if(b == "MB")
  	cout<<n/1024<<" "<<b;
  	else if(b == "GB")
  	cout<<n/(1024*1024)<<" "<<b;
  	else
  	cout<<"WRONG CHOISE";
  }
  
  else if(a == "MB")
  {
  cout<<"ENTER MEGABYTES=";
  	cin>>n;
  	cout<<"\nENTER THE CHOISE=";
  	cin>>b;
  	cout<<"\t\t\t"<<n<<" "<<a<<"=";
  	if(b == "B")
  	cout<<n*(1024*1024);
  	else if(b == "KB")
  	cout<<n*1024<<" "<<b;
  	else if(b == "GB")
  	cout<<n/1024<<" "<<b;
  	else
  	cout<<"WRONG CHOISE";
  }
  
  else if(a == "GB")
  {
  	cout<<"ENTER GIGABYTES=";
  	cin>>n;
  	cout<<"\nENTER THE CHOISE=";
  	cin>>b;
  	cout<<"\t\t\t"<<n<<" "<<a<<"=";
  	if(b == "B")
  	cout<<n*(1024*1024*1024)<<" "<<b;
  	else if(b == "KB")
  	cout<<n*(1024*1024)<<" "<<b;
  	else if(b == "MB")
  	cout<<n*1024<<" "<<b;
  	else
  	cout<<"WRONG CHOISE";
  }
  else
  cout<<"WRONG CHOISE";
  cout<<endl<<endl;
} 


void all :: length()
{
	system("cls");
	cout<<"ENTER UNIT YOU WANT TO CONVERT FROM THESE\n\tKILOMETER(Km)\tMETER(m)\tCENTIMETER(cm)\tMILLIMETER(mm)\tFEETS(ft)\tINCES(in)\n";
	cout<<"ENTER YOUR CHOISE=";
	cin>>a;

if(a == "Km")  
  {
  	
  	cout<<"ENTER KILOMETERS=";
  	cin>>n;
  	cout<<"\nENTER THE CHOISE=";
  	cin>>b;
  	cout<<"\t\t\t"<<n<<" Km=";
  	if(b == "m")
  	cout<<n*1000<<" "<<b;
  	else if(b == "cm")
  	cout<<n*100000<<" "<<b;
  	else if(b == "mm")
  	cout<<n*1000000<<" "<<b;
  	else if(b == "ft")
  	cout<<n*3280.83<<" "<<b;
	  else if(b == "in")
  	cout<<n*39370.1<<" "<<b;
  	else
  	cout<<"WRONG CHOISE";
  }
  
  else if(a == "m")  
  {
  	
  	cout<<"ENTER METERS=";
  	cin>>n;
  	cout<<"\nENTER THE CHOISE=";
  	cin>>b;
  	cout<<"\t\t\t"<<n<<" m=";
  	if(b == "Km")
  	cout<<n/1000<<" "<<b;
  	else if(b == "cm") 
  	cout<<n*100<<" "<<b;
  	else if(b == "mm")
  	cout<<n*1000<<" "<<b;
  	else if(b == "ft")
  	cout<<n*3.28083<<" "<<b;
	  else if(b == "in")
  	cout<<n*39.3701<<" "<<b;
  	else
  	cout<<"WRONG CHOISE";
  }
  
  else if(a == "cm")  
  {
  	
  	cout<<"ENTER CENTIMETERS=";
  	cin>>n;
  	cout<<"\nENTER THE CHOISE=";
  	cin>>b;
  	cout<<"\t\t\t"<<n<<" cm=";
  	if(b == "Km")
  	cout<<n/100000<<" "<<b;
  	else if(b == "m")
  	cout<<n/100<<" "<<b;
  	else if(b == "mm")
  	cout<<n*10<<" "<<b;
  	else if(b == "ft")
  	cout<<n/30.48<<" "<<b;
	  else if(b == "in")
  	cout<<n/2.54<<" "<<b;
  	else
  	cout<<"WRONG CHOISE";
  	
  }
    else if(a == "mm")  
  {
  	
  	cout<<"ENTER MILLIMETERS=";
  	cin>>n;
  	cout<<"\nENTER THE CHOISE=";
  	cin>>b;
  	cout<<"\t\t\t"<<n<<" mm=";
  	if(b == "Km")
  	cout<<n/1000000<<" "<<b;
  	else if(b == "m")
  	cout<<n/1000<<" "<<b;
  	else if(b == "cm")
  	cout<<n/10<<" "<<b;
  	else if(b == "ft")
  	cout<<n/304.8<<" "<<b;
	  else if(b == "in")
  	cout<<n/25.4<<" "<<b;
  	else
  	cout<<"WRONG CHOISE";
  }
  
  else if(a == "ft")  
  {
  	
  	cout<<"ENTER FEETS=";
  	cin>>n;
  	cout<<"\nENTER THE CHOISE=";
  	cin>>b;
  	cout<<"\t\t\t"<<n<<" ft=";
  	if(b == "Km")
  	cout<<n/3280.84<<" "<<b;
  	else if(b == "m")
  	cout<<n/3.281<<" "<<b;
  	else if(b == "cm")
  	cout<<n*30.48<<" "<<b;
  	else if(b == "mm")
  	cout<<n*304.8<<" "<<b;
	  else if(b == "in")
  	cout<<n*12<<" "<<b;
  	else
  	cout<<"WRONG CHOISE";
  	
  }
  else if(a == "in")  
  {
  	
  	cout<<"ENTER INCHES=";
  	cin>>n;
  	cout<<"\nENTER THE CHOISE=";
  	cin>>b;
  	cout<<"\t\t\t"<<n<<" in=";
  	if(b == "Km")
  	cout<<n/(3280.84 * 12)<<" "<<b;
  	else if(b == "m")
  	cout<<n/(3.281 *12)<<" "<<b;
  	else if(b == "cm")
  	cout<<n/(30.48 / 12)<<" "<<b;
  	else if(b == "mm")
  	cout<<n/(304.8 / 12)<<" "<<b;
	  else if(b == "ft")
  	cout<<n/12<<" "<<b;
  	else
  	cout<<"WRONG CHOISE";
  }
  
  else
  cout<<"WRONG_CHOISE";
  
  cout<<endl<<endl;
}


void all ::time_convertor()
{
	
	system("cls");
	cout<<"ENTER YOUR CHOISE FROM THESE\nHOUR(h)\tSECOND(sec)\tMINUTE(min)\tDAY(d)\tWEEK(wk)\n";
	cout<<"ENTER YOUR CHOISE=";
	cin>>a;
if(a == "h")
	{
	cout<<"ENTER HOURS=";
	cin>>n;
	cout<<"ENTER YOUR CHOISE=";
	cin>>b;
	cout<<"\t\t\t"<<n<<" HOURS=";
	if(b == "sec")
	cout<<n*3600<<" "<<b;
	else if(b == "min")
	cout<<n*60<<" "<<b;
	else if(b == "d")
	cout<<n/24<<" "<<b;
	else if(b == "wk")
	cout<<n/168<<" "<<b;
	else
	cout<<"WRONG CHOISE ENTERED";
}

else if(a == "sec")
{
	cout<<"ENTER SECONDS=";
	cin>>n;
	cout<<"ENTER YOUR CHOISE=";
	cin>>b;
	cout<<"\t\t\t"<<n<<" "<<a<<"=";
	if(b == "h")
	cout<<n/3600<<" "<<b;
	else if(b == "min")
	cout<<n/60<<" "<<b;
	else if(b == "d")
	cout<<n/86400<<" "<<b;
	else if(b == "wk")
	cout<<n/604800<<" "<<b;
	else
	cout<<"WRONG CHOISE ENTERED";
}

else if(a == "min")
{
	cout<<"ENTER MINUTES=";
	cin>>n;
	cout<<"ENTER YOUR CHOISE=";
	cin>>b;
	cout<<"\t\t\t"<<n<<" "<<a<<"=";
	if(b == "sec")
	cout<<n*60<<" "<<b;
	else if(b == "h")
	cout<<n/60<<" "<<b;
	else if(b == "d")
	cout<<n/1440<<" "<<b;
	else if(b == "wk")
	cout<<n/10080<<" "<<b;
	else
	cout<<"WRONG CHOISE ENTERED";
}

else if(a == "d")
{
	cout<<"ENTER DAYS=";
	cin>>n;
	cout<<"ENTER YOUR CHOISE=";
	cin>>b;
	cout<<"\t\t\t"<<n<<" "<<a<<"=";
	if(b == "sec")
	cout<<n*86400<<" "<<b;
	else if(b == "min")
	cout<<n*1440<<" "<<b;
	else if(b == "h")
	cout<<n*24<<" "<<b;
	else if(b == "wk")
	cout<<n/7<<" "<<b;
	else
	cout<<"WRONG CHOISE ENTERED";
}

else if(a == "wk")
{
	cout<<"ENTER WEEKS";
	cin>>n;
	cout<<"ENTER YOUR CHOISE=";
	cin>>b;
	cout<<"\t\t\t"<<n<<" "<<a<<"=";
	if(b == "sec")
	cout<<n/604800<<" "<<b;
	else if(b == "min")
	cout<<n/10080<<" "<<b;
	else if(b == "h")
	cout<<n/168<<" "<<b;
	else if(b == "wk")
	cout<<n/7<<" "<<b;
	else
	cout<<"WRONG CHOISE ENTERED";
}

else 
cout<<"WRONG CHOISE";

cout<<endl<<endl;
}
