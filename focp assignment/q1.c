#include<stdio.h>
 int main (){
     int n,c,r,arm=0;
    printf("enter value of number:");
     scanf("%d",&n);
   c=n;
     while (n>0){
        r= n%10;
       arm = (r*r*r) + arm;
         n = n/10;
     } if (c==arm)
     printf("it is armstrong number");
     else
    printf("it is not armstrong number");
    return 0;
 }

