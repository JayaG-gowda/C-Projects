//Coded by Jay

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
//#define n 5

int i,k=0;
void display_name(char ch[100][10], int nu)	//displaying rooms with occupied persons
{
 cout<<"The allocated rooms details\n";
 cout<<"  Rooms    Students\n";
 for(i=0;i<nu;i++)
 {
  cout<<i+1<<". Room"<<i+1<<" = "<<ch[i]<<endl;
 }
}

int display_room(int r[], int nu)		//displaying available rooms only (not already alloted)
{
 cout<<"The avilable rooms are\n";
 for(i=0;i<nu;i++)
 {
  if(r[i]==0)	//checking wheather given room is alloted or not
  {
   cout<<i+1<<". Room"<<i+1<<endl;
  }
  /*else
  {
   cout<<"All rooms are occupied.\n";
   k+= 1;
   break;
  } */
 }
 /*if(k==nu)
  return 1;
 else
  return 0;*/
}

void main()
{
 int rn, op, n, x=0, R[100]={NULL};	//rn means entered choice of room number, R[] holds the rooms number (also it holds, wheather given room is alloted or not)
 char name[100][10]={NULL};	//name[] holds the occupied persons names
 clrscr();

 cout<<"Welcome to Hostel Room Allocation System..!!\n";
 cout<<"Enter the number of room that are there (only for Warden).\n";
 cin>>n;
 while(n>0)
 {
  cout<<"\nOptions are\n";
  cout<<"1. Check-in to the room\n";
  cout<<"2. Display rooms with occupid persons\n";
  cout<<"3. Exit\n";
  cout<<"Enter your choice\n";
  cin>>op;

  switch(op)
  {
   case 1:		//here we check and allocate the room to the customer
	  x = display_room(R,n);
	  if(x!=1)
	  {
	   cout<<"Enter the available room number to allocate\n";
	   cin>>rn;

	   if(rn<=n && rn>=0)		//checking wheather given room number is there in the present room list
	   {
	    if(R[rn-1]==0)	//check the room is empty or not
	    {
	     cout<<"Room is available...!!\nPlease enter your name to allocate room with a conditions.\n1. Space is not allowed (Jayanna_G).\n2. letter should be less than 10 character\n";
	     cin>>name[rn-1];
	     R[rn-1]=1;
	     cout<<"Congratulations room"<<rn<<" is allocated to "<<name[rn-1]<<endl;
	     break;
	    }
	    else
	    {
	     cout<<"Room"<<rn<<" is already occupied by "<<name[rn-1]<<endl;
	     break;
	    }
	   }
	   else
	   {
	    cout<<"Enter the valid room number\n";
	    break;
	   }
	  }
	  break;

   case 2:display_name(name,n);
	  break;

   case 3: exit(0);
	   break;

   default: cout<<"Enter the valid choice...!\n";
	   break;
  }
 }
 getch();
}
