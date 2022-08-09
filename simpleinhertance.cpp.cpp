#include<iostream.h>
class Base
{
	public:
	int display()
	{
		cout<<"hello";
		return 0;
	}
};
class Derived:public Base 
{
	public:
	int display()
	{
		int a;
		int b;
		int c;
		cin>>a"\n">>b"\n";
		c=a+b;
		cout>>c;
		return c;
	}	
		
	
};
void main()
{
	Derived d;
	d.display;
}
