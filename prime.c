#include<stdio.h>
int main()
{
     int count=0;
      int  i,n;
      printf("enter the number:");
      scanf("%d",&n);
     for(i=1;i*i<n;i++)
     {
        if(n%i==0)
        {
            count++;

        }
        if((n%i)!=i)
        {
            count++;
        }
         if(count==2)
            printf("prime number");
         else
            printf("not a  prime number");
        
     }
}