#include<iostream.h>
#include<conio.h>
class Sample
{
  public:
  int age;
  void display()
  {
    cout<<"Age is="<<age;
  }
};
void main()
{
  clrscr();
  Sample s1;
  cout<<"Enter your Age :";
  cin>>s1.age;
  s1.display();
  getch();

}