//Coded by Jay

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define n 5

int i;
void display_name(char ch[n][10])
{
 cout<<"The allocated rooms details\n";
 cout<<"  Rooms     Member\n";
 for(i=0;i<n;i++)
 {
  cout<<i+1<<". Room"<<i+1<<" = "<<ch[i]<<endl;
 }
}

void display_room(int r[])
{
 cout<<"The avilable rooms are\n";
 for(i=0;i<n;i++)
 {
  if(r[i]==0)
  {
   cout<<i+1<<". Room"<<i+1<<endl;
  }
 }
}

void main()
{
 int rn, op, R[n]={NULL};
 char name[n][10]={NULL};
 clrscr();

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
   case 1:
	  display_room(R);
	  cout<<"Enter the available room number to allocate\n";
	  cin>>rn;

	  for(i=0;i<n;i++)
	  {
	   if(rn<=n && rn>=0)
	   {
	    if(R[rn-1]==0)
	    {
	     cout<<"Room is available...!!\nPlease enter your name to allocate room with a conditions.\n1. Space is not allowed (Jayanna_G).\n2. letter should be less than 10 character\n";
	     cin>>name[rn-1];
	     R[rn-1]=1;
	     cout<<"Congratulations room is allocated to "<<name[rn-1]<<endl;
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
