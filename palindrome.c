#include <stdio.h>
void main()
{
    int rev=0,r=0,temp=0,sum=0,n;
    printf("enter the number \n");
    scanf("%d",&n);
    sum=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(sum==rev)
    {
        printf("number is palindrome.");
    }
    else
    {    
        printf("number is not palindrome.");
    }
}
