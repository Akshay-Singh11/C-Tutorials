#include<stdio.h>
int main()
{
  int a,b,p;
  printf("Length of Rectangle = ");
  scanf("%d",&a);

  printf("Breadth of Rectangle = ");
  scanf("%d",&b);
  
  p= 2*(a+b);

  printf("Perimeter =  %d",p);
  return 0;
}