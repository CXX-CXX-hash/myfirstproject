#include <stdio.h>
#include <math.h>
typedef struct{
int x;
int y;
}aaa;
aaa pla[3];
int a1;
int a2;
int distance(aaa,aaa);
int main(){
int sum=0;
for(int i=0;i<3;i++){
scanf("%d %d",&pla[i].x,&pla[i].y);	
}
sum=distance(pla[0],pla[1])+distance(pla[1],pla[2])+distance(pla[0],pla[2]);
printf("%d",sum);	
return 0;
}
int distance(aaa a1,aaa a2){
int sum=0;
sum=sqrt(pow((a1.x-a2.x),2)+pow((a1.y-a2.y),2));
return sum;
}
