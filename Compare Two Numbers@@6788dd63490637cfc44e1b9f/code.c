// Your code here...
#include<stdio.h>
void main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("Equal");
    }
    else if(a>b){ 
        printf("First");
    }
    else if(b>a){ 
        printf("Second");
    }
    
}