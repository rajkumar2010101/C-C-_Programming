#include<stdio.h>


int main()


{   
    unsigned int amt, ruy;

 
        printf("input an amount=");

    
        scanf("%d",&amt);


        ruy=amt/100; 

   
        printf("Rs.100=%u\n",ruy);

   
        amt=amt%100;

    
        ruy=amt/50;


    
        printf("Rs.50=%u\n",ruy);

   
        amt=amt%50;

   
        ruy=amt/20;

    
        printf("Rs.20=%u\n",ruy);

  
       amt=amt%20;

   
       ruy=amt/10;

    
       printf("Rs.10=%u\n",ruy);

 
       amt=amt%10;

   
       ruy=amt/5;

    
       printf("Rs.5=%u\n",ruy);

  
       amt=amt%5;

   
       ruy=amt/2;

    
       printf("Rs.2=%u\n",ruy);

 
       amt=amt%2;
 
    
   
      printf("Rs.1=%u",amt);    

      return 0;    
}


