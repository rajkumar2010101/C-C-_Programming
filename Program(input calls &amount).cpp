#include<stdio.h>

 
int main()

     
{float calls , amt;

     
 printf("input no Calls=");

     
 scanf("%f",&calls);

      
if(calls>400)

     
 amt=650+(calls-400)*0.5;

     
 else if(calls>300)

     
 amt=550+(calls-300)*1;

      
else if(calls>200)

     
 amt=400+(calls-200)*1.5;

     
 else if(calls>100)

     
 amt=200+(calls-100)*2;


     
 else

     
 amt=200;

     
 printf("Total Amount=%f",amt);
      
        
     }           