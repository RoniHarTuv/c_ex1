#include <stdio.h>
#include "NumClass.h"
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    int i=a;
    printf("The Armstrong numbers are:");
    for(i;i<=b;i++){
           if(isAmstrong(i)==1){
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Palindromes are:");
    i=a;
    for(i;i<=b;i++){
           if(isPalindrome(i)==1){
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Prime numbers are:");
    if(a==0){ a=1 ;}
    i=a;
    for(i;i<=b;i++){
           if(isPrime(i)==1){
            printf(" %d",i);
        }
    }
    if(a==0){ a=1 ;}
    i=a;
    printf("\n");
    printf("The Strong numbers are:");
    for(i;i<=b;i++){
        int m =isStrong(i);
        if(m==1){
            printf(" %d",i);
        }
    }
    printf("\n");
}