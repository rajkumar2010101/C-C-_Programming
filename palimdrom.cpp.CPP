#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int n ,r=0 , m;
  cout<<"Enter a intger number ";
  cin>>n;
  while(n!=0)
  {
    m = n % 10;
    r = r*10+m;
    n /= 10;
  }
  cout<<"Revres is :"<<r;
  return 0;
  getch();
}
