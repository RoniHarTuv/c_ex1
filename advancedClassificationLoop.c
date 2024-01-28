#include "NumClass.h"
int lenght(int a){
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

int isPalindrome(int a){
    int l = lenght(a);
    if(l==1){
        return true;
    }
    int temp = a;
    int index = 0;
    int nums1[l];
    while (a > 0)
    {
        temp = a - ((a / 10) * 10);
        a = a / 10;
        nums1[index] = temp;
        index++;
    }
    int p1 = 0;
    int p2 = l - 1;
    while(p1<p2){
    if(nums1[p1]!=nums1[p2]){
            return false;
        }
     p2--;
     p1++;
    }
    return true;
}

int isAmstrong(int a){
    int temp2 = a;
    int l = lenght(a);
    int temp = a;
    int index = 0;
    int nums1[l];
    while (a > 0)
    {
        temp = a - ((a / 10) * 10);
        a = a / 10;
        nums1[index] = temp;
        index++;
    }
    int ans=0;
    int i =0;
    for (i; i < l; i++)
    {
        ans += power(nums1[i], l);
    }
    if (ans == temp2)
    {
        return true;
    }
    return false;
}