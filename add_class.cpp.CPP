#include<iostream.h>
#include<conio.h>
class Addtion
{
  public:
  int a;
  int b;
  int k;
  void sum()
  {
    cin>>a;
    cin>>b;
     k=a+b;
     cout<<"Sum is :"<<k<<endl;
  }
  void display()
  {
    cout<<"Values is: "<<endl;
  }
};
void main()
{
  clrscr();
  Addtion add;
  cout<<"Information is\n";
  add.display();
  add.sum();
  getch();
}
