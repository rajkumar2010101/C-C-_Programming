#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int n , p=0 , p1=0 , p2=1 , x=0;
  printf(" Number of Turns");
  scanf("%d",&n);
  while(x<=n)
  {
    printf("%d\n",p2);
    p=p1+p2;
    p1=p2;
    p2=p;
    x++;
  }
  getch();
}

