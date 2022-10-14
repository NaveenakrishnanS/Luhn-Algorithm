#include <stdio.h>
#include <stdlib.h>
#include<math.h>
long long luhn(long long x);
void main()
{
   long long a;
   printf("\nEnter the Credit card number:");
   scanf("%lld",&a);
   luhn(a);
}

long long luhn(long long x)
{
    long long temp;
    int temp1,b,p,q;
    int sum=0, count=1;
    temp=x;
    while(count<=14)
    {
        if(count%2==0)
        {
            temp1= temp%10;
            temp =temp/10;
            b=temp1*2;
            if(b>9)
            {
                p=b%10;
                q=b/10;
                sum=sum+p+q;
            }
            else
            {
                sum=sum+b;
            }
            count++;
        }
        else
        {
            temp1= temp%10;
            temp =temp/10;
            sum=sum+temp1;
            count++;
        }
    }
    if(sum%10==0)
    {
        printf("\n The Entered Credit Card Number is Valid!");
    }
    else
    {
        printf("\n Please Enter the Valid Credit Card Number");
        main();

    }
}
