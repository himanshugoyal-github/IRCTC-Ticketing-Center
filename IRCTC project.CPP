#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
#include<math.h>
#include<dos.h>
int monthly[]={31,28,31,30,31,30,31,31,30,31,30,31};
struct sign_up
{
	char fn[25],mn[25],ln[25];//name of the person
	int date,month,year;//date of birth of the person
	char email[50];//new-email of the person
	char pass[50],conpass[50];
	int tdate,tmonth,tyear;//date of travelling
	int tadults,tchild,ttotal;//no. of adults,children travelling
	int tst1,tst2;//states of travelling
	int tconformation;//does your ticket really exist
}s[100];
//----------------------------------------------
void signup(int am)
{
	clrscr();
	cout<<"\t\t\tWELCOME TO SIGN UP SCREEN OF IRCTC"<<endl;
	cout<<"\t\t\t----------------------------------";
	float z,x=10,y=10;
	gotoxy(x,y);
	cout<<"First name";
	x+=10;
	y-=0.5;
	gotoxy(x,y);
	cout<<"|-------------------------|";
	x=20;
	y+=1;
	gotoxy(x,y);
	cout<<"|                         |";
	x=20;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|                         |";
	x=20;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|-------------------------|";
	y-=1;
	x+=2;
	gotoxy(x,y);
	gets(s[am].fn);
	y+=2.5;
	x=10;
	gotoxy(x,y);
	cout<<"Middle name";
	x+=10;
	y-=0.5;
	gotoxy(x,y);
	cout<<"|-------------------------|";
	x=20;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|                         |";
	x=20;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|                         |";
	x=20;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|-------------------------|";
	y-=0.5;
	x+=2;
	gotoxy(x,y);
	gets(s[am].mn);
	y+=2.5;
	x=10;
	gotoxy(x,y);
	cout<<"Last name";
	x+=10;
	y-=0.5;
	gotoxy(x,y);
	cout<<"|-------------------------|";
	x=20;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|                         |";
	x=20;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|                         |";
	x=20;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|-------------------------|";
	y-=0.5;
	x+=2;
	gotoxy(x,y);
	gets(s[am].ln);
	y+=2.5;
	x=10;
	gotoxy(x,y);
	cout<<"Dob(yyyy/mm/dd)";
	x+=20;
	y-=0.5;
	z=y;
	gotoxy(x,y);
	cout<<"|-----|";
	x=30;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|     |";
	x=30;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|     |";
	x=30;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|-----|";
	y-=0.5;
	x+=2;
	gotoxy(x,y);
	cin>>s[am].year;
	while(s[am].year<1000||s[am].year>9999)
	{
		cout<<"Invalid year";
		x=10,y=19;
		x+=20;
		y-=0.5;
		gotoxy(x,y);
		cout<<"|-----|";
		x=30;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|     |";
		x=30;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|     |";
		x=30;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|-----|";
		y-=0.5;
		x+=2;
		gotoxy(x,y);
		cin>>s[am].year;
	}
	if(s[am].year%100==0&&s[am].year%400==0)
		monthly[1]+=1;
	else if(s[am].year%4==0)
		monthly[1]+=1;
	x+=8;
	y=z;
	gotoxy(x,y);
	cout<<"|-----|";
	x=40;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|     |";
	x=40;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|     |";
	x=40;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|-----|";
	y-=0.5;
	x+=2;
	gotoxy(x,y);
	cin>>s[am].month;
	while(s[am].month<1||s[am].month>12)
	{
		cout<<"Invalid month";
		x+=8;
		y=z;
		gotoxy(x,y);
		cout<<"|-----|";
		x=40;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|     |";
		x=40;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|     |";
		x=40;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|-----|";
		y-=0.5;
		x+=2;
		gotoxy(x,y);
		cin>>s[am].month;
	}
	x+=8;
	y=z;
	gotoxy(x,y);
	cout<<"|-----|";
	x=50;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|     |";
	x=50;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|     |";
	x=50;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|-----|";
	y-=0.5;
	x+=2;
	gotoxy(x,y);
	cin>>s[am].date;
	while(s[am].date<1||s[am].date>monthly[s[am].month-1])
	{
		cout<<"Invalid date";
		x+=8;
		y=z;
		gotoxy(x,y);
		cout<<"|-----|";
		x=50;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|     |";
		x=50;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|     |";
		x=50;
		y+=0.5;
		gotoxy(x,y);
		cin>>s[am].date;
	}
	y+=5;
	x=10;
	int l=y;
	gotoxy(x,y);
	cout<<"Enter email adress";
	x+=20;
	y-=1;
	gotoxy(x,y);
	cout<<"|-------------------------|";
	x=30;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|                         |";
	x=30;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|                         |";
	x=30;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|-------------------------|";
	y-=0.5;
	x+=2;
	gotoxy(x,y);
	gets(s[am].email);
	for(int i=0;i<am;i++)
	{
		if(strcmp(s[i].email,s[am].email)==0)
		{
			cout<<"\n\nuser exist choose different id press key to continue";
			getch();
			x=10;
			gotoxy(x,l);
			cout<<"choose another email id ";
			x+=20;
			y-=1;
			gotoxy(x,y);
			cout<<"|-------------------------|";
			x=30;
			y+=0.5;
			gotoxy(x,y);
			cout<<"|                         |";
			x=30;
			y+=0.5;
			gotoxy(x,y);
			cout<<"|                         |";
			x=30;
			y+=0.5;
			gotoxy(x,y);
			cout<<"|-------------------------|";
			y-=0.5;
			x+=2;
			gotoxy(x,y);
			gets(s[am].email);
		}
	}
	y+=5;
	x=10;
	gotoxy(x,y);
	cout<<"Enter the password";
	x+=32;
	gotoxy(x,y);
	cout<<"|--------------------------|";
	x=44;
	gotoxy(x,y);
	char a;
	for(i=0;;)
	{
		a=getch();
		if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
		{
			s[am].pass[i]=a;//stores our password
			i++;
			cout<<"*";
		}
		if(a=='\b'&&i>=1)//if user typed backspace
		{
			cout<<"\b \b";//rub the character behind the courser
			--i;
		}

		if(a=='\r') //if enter is pressed
		{
			s[am].pass[i]=NULL;//adding null character at the end of string
			break;//break the infinite loop
		}
       }
}
struct sign_in
{
	char email[50];//new-email of the person
	char pass[50];
}si;
void signin(int am,int &b,int &c,int &i)
{
	clrscr();
	cout<<"\t\t\tWELCOME TO SIGN IN SCREEN OF IRCTC"<<endl;
	cout<<"\t\t\t----------------------------------";
	float z,x=10,y=10;
	gotoxy(x,y);
	cout<<"Enter email adress";
	x+=20;
	y-=0.5;
	gotoxy(x,y);
	cout<<"|-------------------------|";
	x=30;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|                         |";
	x=30;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|                         |";
	x=30;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|-------------------------|";
	y-=0.5;
	x+=2;
	gotoxy(x,y);
	gets(si.email);
	y+=2.5;
	x=10;
	gotoxy(x,y);
	cout<<"Enter the password";
	x+=30;
	gotoxy(x,y);
	cout<<"|--------------------------|";
	x=42;
	gotoxy(x,y);
	char ch[100],a;
	for(i=0;;)
	{
		a=getch();
		if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
		{
			si.pass[i]=a;//stores our password
			i++;
			cout<<"*";
		}
		if(a=='\b'&&i>=1)//if user typed backspace
		{
			cout<<"\b \b";//rub the character behind the courser
			--i;
		}

		if(a=='\r') //if enter is pressed
		{
			si.pass[i]=NULL;//adding null character at the end of string
			break;//break the infinite loop
		}
	}
	for (i=0;i<am;i++)
	{
		if(strcmpi(s[i].email,si.email)==0)
		{
			b=1;
			break;
		}
	}
	if(strcmp(s[i].pass,si.pass)==0)
	{
		c=1;
	}
}
void state(int &am)
{
	clrscr();
	int n;
	float x,y;
	x=10,y=10;
	cout<<"State codes\n\n901\tDelhi\n902\tAjmer\n903\tMumbai\n904\tKashmir\n"
	    <<"905\tChennai\n906\tAndhra Pradesh\n907\tRajasthan\n908\tArunachal Pradesh";
	y+=5.5;
	x=10;
	gotoxy(x,y);
	cout<<"Enter state code u wanna proceed with:";
	x+=40;
	y-=0.5;
	gotoxy(x,y);
	cout<<"|-----|";
	x=50;
	y+=1;
	gotoxy(x,y);
	cout<<"|     |";
	x=50;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|     |";
	x=50;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|-----|";
	y-=0.5;
	x+=2;
	gotoxy(x,y);
	int k=0;
	cin>>s[am].tst1;
	for(int i=901;i<909;i++)
	{
		if(s[am].tst1==i)
		{
			k=1;
			break;
		}
	}
}
void st(int &am,int &y,int &x,int &k)
{
	y+=5.5;
	x=10;
	gotoxy(x,y);
	cout<<"State you want to end with: ";
	x+=40;
	y-=0.5;
	gotoxy(x,y);
	cout<<"|-----|";
	x=50;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|     |";
	x=50;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|     |";
	x=50;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|-----|";
	y-=0.5;
	x+=2;
	gotoxy(x,y);
	k=0;
	cin>>s[am].tst2;
	for(int i=901;i<909;i++)
	{
		if(s[am].tst2==i)
		{
			k=1;
			break;
		}
	}
}
void states(int am)
{
	clrscr();
	int n;
	float x,y;
	x=10,y=10;
	cout<<"State codes\n\n901\tDelhi\n902\tAjmer\n903\tMumbai\n904\tKashmir\n"
	    <<"905\tChennai\n906\tAndhra Pradesh\n907\tRajasthan\n908\tArunachal Pradesh";
	y+=5.5;
	x=10;
	gotoxy(x,y);
	cout<<"Enter state code u wanna proceed with:";
	x+=40;
	y-=0.5;
	gotoxy(x,y);
	cout<<"|-----|";
	x=50;
	y+=1;
	gotoxy(x,y);
	cout<<"|     |";
	x=50;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|     |";
	x=50;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|-----|";
	y-=0.5;
	x+=2;
	gotoxy(x,y);
	int k=0;
	cin>>s[am].tst1;
	for(int i=901;i<909;i++)
	{
		if(s[am].tst1==i)
		{
			k=1;
			break;
		}
	}
	if(k==0)
	{
		cout<<"Please enter a valid state. press any key to contoinue";
		getch();
		state(am);
	}
	int e=y,w=x;
	y+=5.5;
	x=10;
	gotoxy(x,y);
	cout<<"State you want to end with: ";
	x+=40;
	y-=0.5;
	gotoxy(x,y);
	cout<<"|-----|";
	x=50;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|     |";
	x=50;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|     |";
	x=50;
	y+=0.5;
	gotoxy(x,y);
	cout<<"|-----|";
	y-=0.5;
	x+=2;
	gotoxy(x,y);
	k=0;
	cin>>s[am].tst2;
	for(i=901;i<909;i++)
	{
		if(s[am].tst2==i)
		{
			k=1;
			break;
		}
	}
	if(k==0)
	{
		cout<<"Please enter a valid state. press any key to contoinue";
		getch();
		st(am,e,w,k);
	}

	float cost;
	int m,distance,swn;
	int date ,year,month;
	if(s[am].tst1-s[am].tst2==0)
	{
		cout<<"you better rest at your home";
		getch();
	}
	else
	{
		clrscr();
		x=10,y=10;
		gotoxy(x,y);
		cout<<"date u wanna go(yyyy/mm/dd)";
		x+=30;
		y-=0.5;
		gotoxy(x,y);
		cout<<"|-----|";
		x=40;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|     |";
		x=40;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|     |";
		x=40;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|-----|";
		y-=0.5;
		x+=2;
		gotoxy(x,y);
		cin>>s[am].tyear;
		while(s[am].tyear<1000||s[am].tyear>9999)
		{
		cout<<"Invalid year";
		x=10,y=10;
		x+=30;
		y-=0.5;
		gotoxy(x,y);
		cout<<"|-----|";
		x=40;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|     |";
		x=40;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|     |";
		x=40;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|-----|";
		y-=0.5;
		x+=2;
		gotoxy(x,y);
		cin>>s[am].tyear;
	}
	if(s[am].tyear%100==0&&s[am].tyear%400==0)
		monthly[1]+=1;
	else if(s[am].tyear%4==0)
		monthly[1]+=1;
		y=9.5;
		x=50;
		gotoxy(x,y);
		cout<<"|-----|";
		x=50;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|     |";
		x=50;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|     |";
		x=50;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|-----|";
		y-=0.5;
		x+=2;
		gotoxy(x,y);
		cin>>s[am].tmonth;
		while(s[am].tmonth<1||s[am].tmonth>12)
	{
		cout<<"Invalid month";
		x=50;
		y=9.5;
		gotoxy(x,y);
		cout<<"|-----|";
		x=50;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|     |";
		x=50;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|     |";
		x=50;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|-----|";
		y-=0.5;
		x+=2;
		gotoxy(x,y);
		cin>>s[am].tmonth;
		}
		x=60;
		y=9.5;
		gotoxy(x,y);
		cout<<"|-----|";
		x=60;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|     |";
		x=60;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|     |";
		x=60;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|-----|";
		y-=0.5;
		x+=2;
		gotoxy(	x,y);
		cin>>s[am].tdate;

		while(s[am].tdate<1||s[am].tdate>monthly[s[am].tmonth-1])
		{
		cout<<"Invalid date";
		y=9.5;
		x=60;
		gotoxy(x,y);
		cout<<"|-----|";
		x=60;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|     |";
		x=60;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|     |";
		x=60;
		y+=0.5;
		gotoxy(x,y);
		cout<<"|-----|";
		y-=0.5;
		x+=2;
		gotoxy(	x,y);
		cin>>s[am].tdate;
		}
		cout<<"\nthe coach in which u wanna go\n";
		cout<<"\t\t1.  FIRST CLASS --- 3.5 Rs per km"
		    <<"\n\n\t\t2.  1AC --- 3 Rs per km"
		    <<"\n\n\t\t3.  2nd AC --- 2.5 Rs per km"
		    <<"\n\n\t\t4.  3rd AC --- 2 Rs per km"
		    <<"\n\n\t\t5.  AC CHAIR CAR --- 1.5 Rs per km"
		    <<"\n\n\t\t6.  SLEEPER --- 1 Rs per km"
		    <<"\n\n\t\t7.  NON-AC CHAIR CAR --- 0.5 Rs per km";
		cout<<"\n\n\tEnter in which u wanna go";
		cin>>s[am].ttotal;
		swn=s[am].ttotal;
		int f;
		if(s[am].ttotal>=1&&s[am].ttotal<=7)
		{
			m=abs(s[am].tst2-s[am].tst1);
			distance=m*100;
			cost=distance*(3.5-(swn-1)*(0.5));
			cout<<"cost for one person:"<<cost;
			cout<<"\n\tproceed with registration by pressing any key";
			getch();
			cout<<"\n\n\tno. of adult persons=";
			cin>>s[am].tadults;
			cout<<"\n\nno. of children going for trip (age<12) (ticket prices are half for them)=";
			cin>>s[am].tchild;
			cost=cost*s[am].tadults+(cost*s[am].tchild)/2;
			cout<<"\n\t\ttotal cost of the trip"<<cost;
			cout<<"\n\t\You had to do payment at your nearest center within 3 days!!";
			s[am].tconformation=1;
			getch();
			s[am].ttotal=s[am].tadults+s[am].tchild;
		}
	}
}
void son(int &am,int &q)
{
		clrscr();
		signup(am);
		am+=1;
		q=1;
}
void main()
{
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\tWELCOME TO IRCTC";
	delay(3000);
	cout<<"\n\n\n\n\n\t\t\tPress any key to continue....";
	int am=0,i=0;
	getch();
	int ch,q=0;
	while(1)
	{
		al:
		clrscr();
		cout<<"\t\t\t\t\tMAIN MENU"
		    <<"\n\t\t\t1.SIGN UP(for a new user)"
		    <<"\n\t\t\t2.SIGN IN(for a existing user)"
		    <<"\n\t\t\t3.TICKET BOOKING"
		    <<"\n\t\t\t4.ACCOUNT DETAILS"
		    <<"\n\t\t\t5.CANCELATION OF TICKET"
		    <<"\n\t\t\t6.LOG OUT"
		    <<"\n\t\t\t7.EXIT"
		    <<"\n\t\tENTER YOUR CHOICE: ";
		cin>>ch;
		switch(ch)
		{
			case 1: if(q==0)
			{
				son(am,q);
			}
			else
			{
				cout<<"first sign out and than sign up\npress key to continue";
				getch();
			}
				break;
			case 2:
			if(q==0)
			{
				clrscr();
				int b=0,c=0;
				int s=0;
				signin(am,b,c,i);
				if(b==1)
				{
					if(c==1)
					{
						q=1;
						cout<<"\n\n\t\tyou are ready to proceed";
						cout<<"  Press any key";
						getch();
					}
					else
					{
						cout<<"invalid user";
					       getch();
					}
				}
				else
				{
					cout<<"\ninvalid user";
				       getch();
				}
			}
			else
			{
				cout<<"fisrt sign out and than sign in(press key to continue)";
				getch();
			}
				break;
			case 3: if(q==1)
				{
					clrscr();
					states(i);
				}
				else
					cout<<"PLEASE SIGN IN/UP FIRST!!!!";
				getch();
				break;
			case 4:if(q==0)
				{
					clrscr();
				      cout<<"first sign to get your account details";
				      getch();
				}
				else
				{
					clrscr();
					if(s[i].tconformation==0)
					{
						cout<<"no ticket booked ";
					}
					else
					{
						cout<<"state1 code:-"<<s[i].tst1;
						cout<<"\n\nstate 2 code:-"<<s[i].tst2;
						cout<<"\n\nno. adults on the trip:-"<<s[i].tadults;
						cout<<"\n\nno. of children in the trip:-"<<s[i].tchild;
						cout<<"\n\ntotal no. of members on the trip:-"<<s[i].ttotal;
						cout<<"\n\ndeparture date:="<<s[i].tdate<<"/"<<s[i].tmonth<<"/"<<s[i].year;
					}
					getch();
				 }break;
			case 5: if(q==1)
				{
					clrscr();
					int e=0;
					cout<<"are u confirmed u wanna cancel your ticket"
					    <<"\n\tif yes,press1"
					    <<"\n\tif no,press any other no.";
					cin>>e;
					if(e==1)
					{
						s[i].tconformation=0;
						cout<<"\n\tyour ticket now cancelled succesfully";
					}
				}
				else
					 cout<<"PLEASE SIGN IN/UP FIRST!!!!";
				getch();
				break;
			case 6:if(q==0)
			{
				clrscr();
				cout<<"first login and then log out";
				getch();
			}
			else
			{
				cout<<"you are successfuly signed out";
				q=0;
			}
			break;
			case 7:
				exit(0);
			default:cout<<"enter valid choice";
		}
		getch();
	}
}
