#include<stdio.h>
int main (){
int a,b,hcf;
printf("enter value of a:");
scanf("%d",&a);
printf("enter value of b:");
scanf("%d",&b);

while(b!= 0){
  int temp =b;
 b = a%b;
 a = temp;

} hcf = a;
 printf(" hcf is %d", hcf);
return 0;
}