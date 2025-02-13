#include<stdio.h>
void main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%s",(a-b)>0 && (b-a)<0 ||(a,b==0)?"True":"False");
    }