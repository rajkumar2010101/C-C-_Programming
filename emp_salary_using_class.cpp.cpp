#include<iostream>
class Employees
{
	public:
	int a;
	int b;
	int set_view(char a)
	{
		std::cout<<"Name of employee:"endl;
		cin>>a;
	}
	int get_data()
	{
		a=100;
		b=102;
		return(a+b);
		cout<<"Salary is:"<<(a+b)<<andl;
		
	}
	
		
};
int main()
{
	 Employees e[5];
	 e.set_view();
	 e.get_data();
}
