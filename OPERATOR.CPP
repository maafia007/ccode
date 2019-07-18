#include<iostream.h>
#include<conio.h>
class demo
{
  int x,y,z,a;
  public:
  demo()
  {
  x=1,y=2,z=3 ;
  }
  void getdata()
  {
  cout<<"enter 3 values\n";
  cin>>x>>y>>z;
  }
  void dispdata()
  {
  cout<<x<<y<<z;
  }
  void opertor1()
  {
  x++;
  y++;
  z++;
  }
  void operator2()
  {
   a=x+y+z;
  }
};
  void main()
  {
  clrscr();
  demo d;
  int x,y,z,a;
  cout<<"3 values"<< x<< y<< z;
  d.opertor1();
  cout<< x<< y<< z;
  d.operator2();
  cout<<a;
  getch();
  }