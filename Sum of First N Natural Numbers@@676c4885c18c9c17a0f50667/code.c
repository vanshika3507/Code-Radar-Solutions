// Your code here...
#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1; i<=n; i++){
        sum=sum+i;
    }
    printf("%d",sum);
}