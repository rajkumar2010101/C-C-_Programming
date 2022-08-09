#include<stdio.h>
#include<conio.h>
void main()
{ int array[1000],search,c,n;
  clrscr();
  printf("Enter number of element in array\n");
  scanf("%d",&n);
  printf("array size %d\n",n);
  for(c=0;c<n;c++)
  scanf("%d",&array[c]);
  printf("enter number to search : ");
  scanf("%d",&search);
  for(c=0;c<n;c++)
  if(array[c]==search)
  {
    printf("%d element is present at location\n",search,c+1);
    break;
  }
  if(c==n)
  printf("%d is it not present in array\n",search);
  getch();
}

