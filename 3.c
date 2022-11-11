#include<stdio.h>

int odd_even(int n){
 if(n%2==0)
    return 1;
 else
    return 0;
}

int main(){
 int n;
 printf("enter a number :");
 scanf("%d",&n);
 printf("\n%d ",odd_even(n));
 return 0;

}

