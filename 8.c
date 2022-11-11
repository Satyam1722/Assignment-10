#include<stdio.h>

int perm(int n,int r){
 return fact(n)/fact(n-r);
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
 printf("\n%d ",perm(n,r));
 return 0;

}


