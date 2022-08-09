#include<iostream>
#include<conio.h>
class Prime
{
  public:
  int i, n , flag=0 , rem ;
  void show()
  {
    for(i=2;i<n;i++)
    {
      rem = n % i;
      if(rem==0)
      {
	flag=1;
	break;
      }
      if(flag==0)
      {
	cout<<"Prime NO";
      }
      else
      cout<<"Not a Prime No";
    }
  };
  int main()
  {
    Prime p;
    cout<<"the number is : ";
    cin>>n;
    p.show();
    getch();
  }
