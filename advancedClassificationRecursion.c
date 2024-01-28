#include "NumClass.h"
int lenght(int a){
    if(a==0){
        return 1;
    }
    int l=0;
    int temp =a;
    while (temp>0)
    {
        temp=temp/10;
        l+=1;
    }
    return l;
 }

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    int ans = a;
    int i = 1;
    for (i; i < b; i++)
    {
        ans *= a;
    }
    return ans;
}
int isPalindromeHelper(int a [], int left,int right){
    if(a[left]!=a[right]){
    return false;
    }
    if(left==right || left>right){
        return true;
    }
    return isPalindromeHelper(a,left+1,right-1);
}
int isPalindrome(int a){
    int l = lenght(a);
        int temp =a;
        int nums [l];
        int index=0;
        while (a>0)
    {
        temp=a-((a/10)*10);
        a=a/10;
        nums[index]=temp;
        index++;
    }
     if(a==0){
            nums[0]=0;
        }
    isPalindromeHelper(nums,0,l-1);
}

int isAmstrongHelper(int a,int l,int s,int check){
    if(a==0 && check ==s){
        return true;
    }
    if(a==0){
        return false;
    }
    s+= power(a-((a/10)*10),l);
    return(isAmstrongHelper(a/10,l,s,check));
}

int isAmstrong(int a){
    int l = lenght(a);
    int s =0;
    return isAmstrongHelper(a,l,s,a);
}