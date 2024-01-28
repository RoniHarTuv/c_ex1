#include "NumClass.h"
int isStrong(int a){
    int temp2= a;
    int factorial [10];
    factorial[0]=1;
    int i ;
    for (i = 1; i < 10; i++)
    {
        factorial[i]=factorial[i-1]*i;
    }
    int temp =a;
    int sum =0;
        while (a>0)
    {
        temp=a-((a/10)*10);
        sum+= factorial[temp];
        a=a/10;
        temp =0;
    }
    if(temp2== sum){
        return true;
    }
    else{
        return false;
    }
}

int sqr(int a){
    int b =1;
    while(b*b<a && (b+1)*(b+1)<=a){
        b++;
    }
    return b;
}
int isPrime(int a){
    int i=2;
    int s =sqr(a);
    for(i;i<=s;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}