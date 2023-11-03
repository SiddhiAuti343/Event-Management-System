#include<iostream.h>
#include<conio.h>

class details
{
    public:
    char name[50], location[100];
    long contact, altcontact;
    int a1,a2;
    int date,ss,ff,str,dd;
    void getdetails()
    {
	cout<<"Please enter name: ";
	cin>>name;
	cout<<"Please enter contact number: ";
	cin>>contact;
	cout<<"Please enter Alternate number: ";
	cin>>altcontact;
	cout<<"Please enter Date of Event: ";
	cin>>date;
	cout<<"Please enter Location: ";
	cin>>location;
	cout<<"\n";
	cout<<"Do you need a sound system? "<<endl;
	cout<<"1.Yes"<<endl;
	cout<<"2.No"<<endl;
	cin>>ss;
	if(ss==1)
	{

		cout<<"Your response has been recorded!"<<endl;

	}
	else
	{
		cout<<"Your response has been recorded!"<<endl;
	}
    }
    void food()
    {
	cout<<"Please choose the cuisine you would like to have:"<<endl;
	cout<<"1. Indian Cuisine (Per Plate Rs 150)"<<endl;
	cout<<"2. Chinese Cuisine (Per Plate Rs 100)"<<endl;
	cout<<"3. Italian Cuisine (Per Plate Rs 200)"<<endl;
	cin>>ff;
	if(ff==1)
	{
		cout<<"Your response has been recorded!"<<endl;
		a1=150;

	}
	if(ff==2)
	{
		cout<<"Your response has been recorded!"<<endl;
		a1=100;
	}
	if(ff==3)
	{
		cout<<"Your response has been recorded!"<<endl;
		a1=200;
	}
    }
    void strength()
    {
	cout<<"Please Enter the Number of People:";
	cin>>str;
    }

    void decoration()
    {
	cout<<"Please choose the decoration theme:"<<endl;
	cout<<"1. Confetti (Rs 1000)"<<endl;
	cout<<"2. Collages Of Memorable Photos ( Rs 1500)"<<endl;
	cout<<"3. Floral (Rs 2000)"<<endl;
	cin>>dd;
	if(dd==1)
	{
		cout<<"Your response has been recorded!"<<endl;
		a2=1000;
	}
	if(dd==2)
	{
		cout<<"Your response has been recorded!"<<endl;
		a2=1500;
	}
	if(dd==3)
	{
		cout<<"Your response has been recorded!"<<endl;
		a2=2000;
	}
	
    }
};

class farewell:public details
{
	public:
	int select;
	int amt1,a3;
	void getfarewell()
	{
		cout<<"Please choose the beverage:"<<endl;
		cout<<"1.Orange juice(Rs 100)"<<endl;
		cout<<"2.Mixed fruit juice(Rs 150)"<<endl;
		cout<<"3.Lichi Juice(Rs 200)"<<endl;
		cin>>select;

		if(select==1)
		{
		      cout<<"ORANGELICIOUS!"<<endl;
		      a3=100;
		}
		if(select==2)
		{
		      cout<<"FRUTILICIOUS!"<<endl;
		      a3=150;
		}
		if(select==3)
		{
		      cout<<"LICHILICIOUS!"<<endl;
		      a3=200;
		}
		
		
       }
       void amount()
       {
		 amt1=((a1+a3)*str)+a2;
		 cout<<"Total amount to be paid is: "<<amt1<<endl;
       }

};


class birthday:public details
{
	public:
	int se,ch;
	int ammt,a4,a5;
	void getbirthday()
	{
		cout<<"Please choose the flavour of cake:"<<endl;
		cout<<"1.Chocolate(Rs 500)"<<endl;
		cout<<"2.Butterscotch(Rs 700)"<<endl;
		cout<<"3.Black forest(Rs 800)" <<endl;
		cin>>se;

		if(se==1)
		{
			cout<<"You have chosen Chocolate flavour!"<<endl;

			a4=500;
		}
		if(se==2)
		{
			cout<<"You have chosen Butterscotch flavour!"<<endl;
			a4=700;
		}
		if(se==3)
		{
			cout<<"You have chosen Black Forest flavour!"<<endl;
			a4=800;
		}
	}
	void complimentary()
	{
		cout<<"Please choose the complimentary dishes/drink:";
		cout<<"1.Waffers(Rs 100) "<<endl;
		cout<<"2.Coke(Rs 50)"<<endl;
		cout<<"3.Samosa(Rs 30)"<<endl;
		cin>>ch;

		if(ch==1)
		{
			cout<<"You have chosen Waffers as complimentary dish!"<<endl;
			a5=100;
		}
		if(ch==2)
		{
			cout<<"You have chosen coke as complimentary drink!"<<endl;
			a5=50;
		}
		if(ch==3)

		{
			cout<<"You have chosen samosa as complimentary dish!"<<endl;
			a5=30;
		}
       }
       void pay()
       {
		ammt=((a1+a5)*str)+a4+a2;
		cout<<"Total amount to be paid is: "<<ammt<<endl;

       }
};


class engagement:public details
{

	public:
	int choose,s;
	int a6,a7,amtt;
	void getdessert()
	{
		cout<<"Please choose the dessert:"<<endl;
		cout<<"1.Ice-cream(Rs 20)"<<endl;
		cout<<"2.Gulabjamun(Rs 10)"<<endl;
		cout<<"3.Rasmalai(Rs 40)"<<endl;
		cin>>s;

		if(s==1)
		{
			cout<<"You have chosen Ice-cream as a dessert!"<<endl;
			a6=20;
		}
		if(s==2)
		{
			cout<<"You have chosen Gulabjamun as a dessert!"<<endl;
			a6=10;
		}
		if(s==3)
		{
			cout<<"You have chosen Rasmalai as a dessert!"<<endl;
			a6=40;
		}
	 }
	 void getstarters()
	 {
		cout<<"Please choose the starters:"<<endl;
		cout<<"1.Cheese balls(Rs 100)"<<endl;
		cout<<"2.Soyabean chilly(Rs 70)"<<endl;
		cout<<"3.Paneer tikka(Rs 150)"<<endl;
		cin>>choose;

		if(choose==1)
		{
			cout<<"You have chosen Cheese balls as a starter!"<<endl;
			a7=100;
		}
		else if(choose==2)
		{
			cout<<"You have chosen Soyabean chilly as a starter!"<<endl;
			a7=70;
		}
		else
		{
			cout<<"You have chosen Paneer tikka as a starter!"<<endl;
			a7=150;
		}
	 }
	 void payment()
	 {
		amtt=((a1+a6+a7)*str)+a2;
		cout<<"Total amount to be paid is:"<<amtt<<endl;
	 }
};

class promotion:public details
{
     public:
     int chs,chse,sel;
     int a8,a9,at;
     void getmain()
    {
	 cout<<"Please choose the Main course:"<<endl;
	 cout<<"1.Vegetarian"<<endl;
	 cout<<"2.Non Vegetarian"<<endl;
	 cin>>sel;

	 if(sel==1)
	 {
		cout<<"You have chosen Vegetarian Main course!"<<endl;
		cout<<"Choose the Thalis for Main course:"<<endl;
		cout<<"\n";
		cout<<"1.South Indian Thali(Rs 400)"<<endl;
		cout<<"2.Rajasthani Thali(Rs 600)"<<endl;
		cout<<"3.Jain Thali(Rs 500)"<<endl;
		cin>>chs;
		if(chs==1)
		{
			cout<<"You have chosen South Indian Thali as Main course!"<<endl;
			a8=400;
		}
		else if(chs==2)
		{
			cout<<"You have chosen Rajasthani Thali as Main course!"<<endl;
			a8=600;
		}
		else
		{
			cout<<"You have chosen Jain Thali as Main course!"<<endl;
			a8=500;
		}
		at=(a8*str)+a2;
		cout<<"Total amount to be paid is:"<<at<<endl;

	 }
	 else if(sel==2)
	 {
		cout<<"You have chosen Non vegetarian Main course!"<<endl;
		cout<<"Choose the Thalis for Main course:"<<endl;
		cout<<"\n";
		cout<<"1.Konkani Thali(Rs 500)"<<endl;
		cout<<"2.Bangali Thali(Rs 700)"<<endl;
		cout<<"3.Mughlai Thali(Rs 800)"<<endl;
		cin>>chse;

		if(chse==1)
		{
			cout<<"You have chosen Konkani Thali as Main course!"<<endl;
			a9=500;
		}
		else if(chse==2)
		{
			cout<<"You have chosen Bangali Thali as Main course!"<<endl;
			a9=700;
		}
		else
		{
			cout<<"You have chosen Mughlai Thali as Main course!"<<endl;
			a9=800;
		}
		at=(a9*str)+a2;
		cout<<"Total amount to be paid is:"<<at<<endl;

	}
    }
};


void main()
{
    clrscr();
    int optn;

    cout<<"--------------------------WELCOME TO MOSK!!-----------------------------";
    cout<<"\n";
    cout<<"\n";
    cout<<"Which event you are interested for?";
    cout<<"\n";
    cout<<"\n 1.Farewell Party";
    cout<<"\n 2.Birthday Party";
    cout<<"\n 3.Engagement Party";
    cout<<"\n 4.Promotion Party";
    cout<<"\n";
    cout<<"************************"<<endl;
    cout<<"\n";
    cin>>optn;

    if(optn==1)
    {
	cout<<"Your theme has been  chosen as Farewell Party .Please fill the details below!"<<endl;
	cout<<"\n";
	cout<<"-------------------------------------------------------------------------------"<<endl;
		farewell f;
		f.getdetails();
		cout<<"\n";
		f.food();
		cout<<"\n";
		f.strength();
		cout<<"\n";
		f.decoration();
		cout<<"\n";
		f.getfarewell();
		cout<<"\n";
		cout<<"---------------------------------------------------------------------"<<endl;
		f.amount();


    }
    else if(optn==2)
    {
	cout<<"Your theme has been chosen as Birthday Party. Please fill the details below!"<<endl;

	cout<<"\n";
	cout<<"----------------------------------------------------------------------------"<<endl;
		birthday b;
		b.getdetails();
		cout<<"\n";
		b.food();
		cout<<"\n";
		b.getbirthday();
		cout<<"\n";
		b.complimentary();
		cout<<"\n";
		b.strength();
		cout<<"\n";
		b.decoration();
		cout<<"\n";
		cout<<"-----------------------------------------------------------------------"<<endl;
		b.pay();
		cout<<"\n";



    }
    else if(optn==3)
    {
	cout<<"Your theme has been chosen as Engagement Party. Please fill the details below!"<<endl;
	cout<<"-------------------------------------------------------------------------"<<endl;
		engagement e;
		e.getdetails();
		cout<<"\n";
		e.food();
		cout<<"\n";
		e.getstarters();
		cout<<"\n";
		e.getdessert();
		cout<<"\n";
		e.strength();
		cout<<"\n";
		e.decoration();
		cout<<"\n";
		cout<<"-----------------------------------------------------------------------"<<endl;
		e.payment();
		cout<<"\n";
    }
    else
    {
	cout<<"Your theme has been chosen as Promotion Party. Please fill the details below!"<<endl;
	cout<<"-----------------------------------------------------------------------"<<endl;
		promotion p;
		p.getdetails();
		cout<<"\n";
		p.strength();
		cout<<"\n";
		p.decoration();
		cout<<"\n";
		p.getmain();
		cout<<"\n";

    }
	cout<<"-------------------------------------------------------------------------"<<endl;
	cout<<"\n";
	cout<<"Thanks for filling the details!"<<endl;

	cout<<"\n";

	cout<<"--------------------------THANKS FOR CHOOSING US !!-----------------------";
	getch();
}