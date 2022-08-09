/*1 1 2 3  5  8 .......N*/



 #include<stdio.h>


 int main()


 {
     int x=1,n,p=0,p2=1,p1=0;


  
       printf("no of turms=");


  
       scanf("%d",&n);


  
       while(x<=n)


 
    {
   printf("%d\n",p2);


    
        p=p1+p2;


 
        p1=p2;



         p2=p;


   
        x++;

  
       
       }

   
      printf("finish");    }
 