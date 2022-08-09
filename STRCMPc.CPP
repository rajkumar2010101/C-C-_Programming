#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
  clrscr();
  char str1[]="Alwar" ,
   str2[]="Jaipur",
  str3[]="Alwar";
  int result=0;
  //Comparision of two string
      result = strcmp(str1,str2);
      printf("strcmp(str1,str2) = %d\n",result);
      result = strcmp(str1,str3);
      printf("strcmp(str1,str3) = %d\n",result);
      getch();
}