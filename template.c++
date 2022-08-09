//Template
#include<iostream>
template<class T>
class A
{
	public:
	T num1=3;
	T num2=3;
	void add()
	{
		cout<<"Addtion of two Numbers:"<<num1+num2;
		
	}
};
int main()
{
	A<int>d;
	d.add();
	return 0;
}
