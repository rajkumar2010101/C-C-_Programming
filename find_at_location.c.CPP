#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int search , a[1000] , n ,i;
  printf(" Enter number of element in array :  ");
  scanf(" %d ",&n);
  printf(" array size : %d\n",n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("enter the number you want to\n");
  scanf("%d",&search);
  for(i=0;i<n;i++)
  {
   if(a[i]==search)
   {
     printf("%d present at location %d\n",search,i+1);
     break;
   }
  }
  if(i==n)
  printf("%d is not present in array\n",search);
  getch();
}

