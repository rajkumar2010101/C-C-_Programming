
 #include<stdio.h>
 #include<conio.h>
 struct test
 {
   int ac;
   char name[40];
   float balance;
}
    main()
{
   struct test ts;
   struct test *p;
   clrscr();
   printf(" Name=");
   gets(ts.name);
   printf("AC=");
   scanf("%d",&ts.ac);
   printf("Balance");
   scanf("%f",&ts.balance);
   getch();
   }


