#include<stdio.h>
int digit_c(int n,int r){
 int i;
 while(n)
 {
    if(n%10==r)
    return 1;
    n/=10;
 }

 return 0;


}


int main(){
 int n,r;
 printf("enter a number and digit\n");
 scanf("%d%d",&n,&r);
 if(digit_c(n,r))
    printf("digit is present ");
 else
    printf("digit is not present ");
 return 0;

}

