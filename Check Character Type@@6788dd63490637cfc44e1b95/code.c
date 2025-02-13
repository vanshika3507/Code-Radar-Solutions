#include<stdio.h>
#include<ctype.h>
void main(){
    char ch;
    scanf("%c",&ch);
    if(isdigit(ch)){
        printf("Digit");
    }
    else if(isalpha(ch)&&(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')){
        printf("Vowel");
       } 
        
    else{
        printf("Special Character");
    }
    }