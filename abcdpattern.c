#include<stdio.h>
int main()
{
   int i,j;
   int m;
   printf("enter odd number of rows\n");
   scanf("%d",&m);
   
   for(i=1;i<=m;i++)
   {
     
        for(j=1;j<=m;j++)
        {
            if(i==(m/2+1)||j==(m/2+1))
            printf("#");
            else printf(" ");
        }
     
     printf("\n");
   }
}