#include<stdio.h>
int isPrime( int num){
    int count =0;
    if(num%2==0){
        count++;
    }
    if((count==0)||(num==2)){
        return 1;
    }

    return 0;
}
int main(){
    int t;
    int num;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
        return 0;

}