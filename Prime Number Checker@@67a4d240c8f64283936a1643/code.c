#include<stdio.h>
int isPrime(num){
    int count =0;
    if(num%2==0){
        count++;
    }
    if((count==0)||(num==2)){
        return 1;
    }
    else
    return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
        return 0;
    }

}