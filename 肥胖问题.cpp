#include <stdio.h>
int main(){
double m;
double h;
scanf("%lf%lf",&m,&h);
double a=m/(h*h);
if(a<18.5)
printf("Underweight");
else if(a>=18.5 && a<24)
printf("Normal");
else if(a>=24){
printf("a=%g\nOverweight",a);
}
return 0;	
}
