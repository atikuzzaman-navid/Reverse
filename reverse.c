#include<stdio.h>

int main(){

 int n,r;
 r=0;
printf("Enter a number:");
scanf("%d",&n);
while(n%10!=0){
r=r*10+n%10;
n=n/10;

}
printf("reverse:%d",r);
return 0;






}