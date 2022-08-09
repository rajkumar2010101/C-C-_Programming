#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
void main()
{
  clrscr();
  while(1)
{
  int p;
  printf("\t\t\t\tTOP 20 SPORTS GAMES\n\n");
  printf("\t\t\tPRESS NUMBER TO KNOW TOTAL PLAYERS\n\n");
  printf("Cricket-----  1\n");
  printf("Footboll----- 2\n");
  printf("Badmantin---- 3\n");
  printf("Hockey ------ 4\n");
  printf("Kabaddi------ 5\n");
  printf("Tennis ------ 6\n");
  printf("Wrestling---- 7\n");
  printf("Boxig-------- 8\n");
  printf("Table Tennis- 9\n");
  printf("Motorsport--- 10\n");
  printf("Archery------ 11\n");
  printf("Gymnastic---- 12\n");
  printf("Athletics---- 13\n");
  printf("Swimming----- 14\n");
  printf("Kho Kho------ 15\n");
  printf("Chess-------- 16\n");
  printf("Weightlifting- 17\n");
  printf("Shooting------ 18\n");
  printf("Body Building- 19\n");
  printf("Basketball---- 20\n");
  printf("Exit---------- 0\n");
  printf("Press Your Choice :");
  scanf("%d",&p);

  switch(p)
  {
    case 1:
    printf(" Total Players in Singal Team is : 11\n\n ");
    break;
    case 2:
    printf(" Total Players in Singal Team is : 9\n\n ");
    break;
    case 3:
    printf(" Genrally players : 2\n");
    printf(" NOTE - But International lavel 4 players may play\n\n");
    break;
    case 4:
    printf(" Total Players in Singal Team is : 8\n\n");
    break;
    case 5:
    printf("    \n\n");
    case 0:
    exit(0);
    default:
    printf("Invalid Choice\n\n");
  }
  getch();
}
}