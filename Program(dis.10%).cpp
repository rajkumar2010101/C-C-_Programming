
#include<stdio.h>
 
int main()
  
  {  float rate,qty,total,dis,net;

      
 printf("input rate=");

      
 scanf("%f",&rate);

      
 printf("input qty=");

      
 scanf("%f",&qty);

       
total=rate*qty;
 
     
 if(total>=1000)
 
   
dis=total/100*10;

         
 else

          
 dis=0;

          
 net=total-dis;

          
 printf("TOTAL Amount=%f\n",total);

          
 printf("Discount=%f\n",dis);

          
 printf("Net Amount=%f\n",net);
    }