//Coded by Jay

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define n 5  

int i;
void display_name(char ch[n][10])	//displaying rooms with occupied persons
{
 cout<<"The allocated rooms details\n";
 cout<<"  Rooms     Member\n";
 for(i=0;i<n;i++)
 {
  cout<<i+1<<". Room"<<i+1<<" = "<<ch[i]<<endl;
 }
}

void display_room(int r[])		//displaying available rooms only (not already alloted)
{
 cout<<"The avilable rooms are\n";
 for(i=0;i<n;i++)
 {
  if(r[i]==0)	//checking wheather given room is alloted or not
  {
   cout<<i+1<<". Room"<<i+1<<endl;
  }
 }  
}

void main()
{
 int rn, op, R[n]={NULL};	//rn means entered choice of room number, R[] holds the rooms number (also it holds, wheather given room is alloted or not)
 char name[n][10]={NULL};	//name[] holds the occupied persons names
 clrscr();

 cout<<"Welcome to Hostel Room Allocation System..!!\n";
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
	  display_room(R);
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
	    cout<<"Room is already occupied by "<<name[rn-1]<<endl;
	    break;
	   }
	  }
	  else
	  {
	   cout<<"Enter the valid room number\n";
	   break;
	  }
	  break;

   case 2:display_name(name);
	  break;

   case 3: exit(0);
	   break;

   default: cout<<"Enter the valid choice...!\n";
	   break;
  }
 }
 getch();
}
