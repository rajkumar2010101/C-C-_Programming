#include<stdio.h>
void main()  
  {
  int a;
printf("enter a value between 0 to 9");
scanf("%d",&a);
switch(a)
{case 0: 
     printf("Zero");
     break;
 case 1:
     printf("One");
	 break;
 case 2:
 	 printf("Two");
	 break;
 case 3: 
     printf("Three");
	 break;
 case 4:
     printf("Four");
     break;
 case 5:
     printf("Five");
	 break;
 case 6:
     printf ("Six");
	 break;
 case 7:
     printf ("Seevan"); 
     break;
 case 8:
     printf("Eight");
	 break;
 case 9:
     printf("Nine");
	 break;
	 
	 default:
	 printf("Invalis input");     
	 break;   	      
	 
	 	       
}




}