#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
}