#include<stdio.h>

void print_o(int n){
  int i;
  for(i=1;i<=n;i++)
  {
      if(i%2!=0)
        printf("%d ",i);

  }

}

int main(){
 int n;
 printf("enter a number :");
 scanf("%d",&n);
 print_o(n*2);
 return 0;

}

