#include<stdio.h>
float simple(float p,float r,float t){
  return (p*r*t)/100;
}

int main(){
 float p,r,t;
 printf("enter the principle,rate and time :");
 scanf("%f%f%f",&p,&r,&t);
 printf("area of circle is %f ",simple(p,r,t));
 return 0;
}
