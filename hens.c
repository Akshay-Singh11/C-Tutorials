#include<stdio.h>
int main()
{
  int heads,legs,b;
  scanf("%d",&heads);
    scanf("%d",&legs);
    int goats,hens;
    for(int i=0;i<90;i++){
    b=(2*i)+4*(heads-i);
    if(b==legs){
     printf("hens value is %d ",i);
     goats=heads-i;
     printf("goats value is %d",goats);
    }
    }

}