#include<iostream>
#include<conio.h>
class Bill
{
  public:
  int roll;
  float salary;
  char name[50];

};
int main()
{
   Bill b;
   cout<<"Roll no :";
   cin>>b.roll;
   cout<<"Salary is :";
   cin>>b.salary;
   cout<<"Name is :";
   cin>>b.name;
   getch();
}
