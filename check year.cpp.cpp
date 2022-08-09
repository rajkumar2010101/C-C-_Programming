#include<stdio.h>
int main()
{
	 int year,a;
	 printf("Given Year:");
	 scanf("%d",&year);
	 a=year%4;
	 if(year==0)
	 {
	 	printf("Leap year");
	 }
	 	else
	 	printf(" This is not leap year");
	 
}
