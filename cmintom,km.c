#include<stdio.h>
int main()
{  
  char cm,km,m;
  printf("Enter you number Distance in cm");
  scanf("%d",&cm);

   m=cm/100;
   km=m/1000;

   printf("Distance %d%d",m,km);
   return 0;

}