// program to verify your mobile number by entering the OTP sent to your respective mobile number...
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    long long mn;
    int r,c,otp,eotp;
    printf("Enter your 10 - digit mobile number.....:");
    scanf("%lli",&mn);
    while(mn>0)
    {
        r=mn%10;
        c++;
        mn=mn/10;
    }
    if(c<10||c>10)
        printf("\n\a\aENTERED INVALID MOBILE NUMBER ... \n");
    else
    {   srand(time(0));
        otp=rand()%10000;
        if(otp<1000)
        printf("Your 4 digit OTP is 0%d",otp);
        else
        printf("Your 4 digit OTP is %d",otp);
        printf("\nEnter your 4 digit otp sent to your mobile number......:");
        scanf("%d",&eotp);
        if(otp==eotp)
            printf("Your mobile number is successfully verified...");
        else
            printf("\a\aInvalid otp entered.....");
    }
}
