#include<stdio.h>
int main()
{
	int age;
	printf("Age of Candidate:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("Candidate Eligible for voting.");
	}
	else
	printf("Not Eligible");
	
}


