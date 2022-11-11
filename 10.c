#include<stdio.h>

int prime(int n){
 int i;
 for(i=2;i<n/2;i++){
    if(n%i==0)
       return 0;
    return 1;

 }
}

void prime_f(n){
 int i=2;
 while(n){
    if(prime(i) && n%i==0){
        printf("%d ",i);
        n/=i;
        continue;
    }
   i++;
 }

}

int main(){
int n;
printf("enter a number : ");
scanf("%d",&n);
prime_f(n);
return 0;
}
