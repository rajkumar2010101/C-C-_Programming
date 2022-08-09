#include<stdio.h>
#include<conio.h>
void main()
{
  int a,p=0;
  clrscr();
  printf("given number :
  ");
  scanf("%d",&a);
  p=a % 2;
  if(p==0)
  {
    printf("even number ");
  }
  else
  printf("odd number ");
  getch();
}