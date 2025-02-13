#include<stdio.h>
#include<ctype.h>
void main(){
    char ch;
    scanf("%c",&ch);
    if(isdigit(ch)){
        printf("Digit");
    }
    else if(isalpha(ch)){
        ch=tolower(ch):
        if(ch=='a'||ch=='e'||ch=='i'||ch=='O'||ch=='u'){
            printf("Vowel"):}
        else{
            printf("Consonant"):}
    }
        
    else{
        printf("Special Character");
    }
    }