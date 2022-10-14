#include <stdio.h>
#include <stdlib.h>
#include<math.h>
long long luhn(long long x);
void main()
{
   long long a;
   printf("\nEnter the Credit card number:"); //Input Number
   scanf("%lld",&a);
   luhn(a); // luhn algorithm function
}

long long luhn(long long x)
{
    long long temp;
    int temp1,b,p,q;
    int sum=0, count=1;
    temp=x;
    while(count<=14) // for 14 digit credit card... if you needed to check 16/12 digit card, change 14 --> 16/12
    {
        if(count%2==0) // condition to find even elements from right most
        {
            temp1= temp%10; 
            temp =temp/10;
            b=temp1*2;
            if(b>9) //if two digit is acquired when multiplied with 2
            {
                p=b%10;
                q=b/10;
                sum=sum+p+q; //sumation 
            }
            else
            {
                sum=sum+b; //sumation
            }
            count++; //count increment
        }
        else  // for odd places from right most
        {
            temp1= temp%10;
            temp =temp/10;
            sum=sum+temp1; //sumation
            count++; //count increment
        }
    }
    if(sum%10==0) // validation check
    {
        printf("\n The Entered Credit Card Number is Valid!");
    }
    else
    {
        printf("\n Please Enter the Valid Credit Card Number");
        main(); // if not valid number, return main function

    }
}
