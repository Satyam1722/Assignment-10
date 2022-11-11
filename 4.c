#include<stdio.h>

void print_n(int n){
  int i;
  for(i=1;i<=n;i++)
    printf("%d ",i);
}

int main(){
 int n;
 printf("enter a number :");
 scanf("%d",&n);
 print_n(n);
 return 0;

}

