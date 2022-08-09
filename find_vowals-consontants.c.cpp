#include<stdio.h>
int main()
{char a;
printf("Enter a char value:");
scanf("%c",&a);
switch(a)
{case'a':
 case'e':
 case'i':
 case'o':
 case'u':
 printf("Vowel");
 break;
 default:
 printf("not a vowel");	
}



	
}


