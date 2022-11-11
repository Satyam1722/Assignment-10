#include<stdio.h>
float circle(r){
  return 3.14*r*r;
}

int main(){
 int r;
 printf("enter the radius ");
 scanf("%d",&r);
 printf("area of circle is %f ",circle(r));
 return 0;
}
