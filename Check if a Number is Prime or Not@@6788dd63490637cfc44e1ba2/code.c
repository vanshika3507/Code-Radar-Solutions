// Your code here...
#include<stdio.h>
void main(){
    int a;
    int count=0;
    scanf("%d",&a);
    for(int i=2;i<a;i++){
        if (a%i==0){count++;}
        if((count ==0) ||(a==2)){
            printf("Prime");
        }
        else{
            printf("Not Prime");

        }
    }
}
