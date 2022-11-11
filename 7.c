#include<stdio.h>

int comb(int n,int r){
 return fact(n)/(fact(r)*fact(n-r));
}

int fact(int n){
 int i,fact=1;
 for(i=1;i<=n;i++)
    fact*=i;
 return fact;
}

int main(){
 int n,r;
 printf("enter the thing and selected number :");
 scanf("%d%d",&n,&r);
 printf("\n%d ",comb(n,r));
 return 0;

}


