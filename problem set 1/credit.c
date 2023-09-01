#include <stdio.h>
#include <string.h>

int main(void)
{
getNumber:
    char number[20];
    int flag = -1;
    scanf("%s", number);
    int length = strlen(number);
    for (int i=0; i < length; i++)
    {
        if (number[i] < 48 || number[i] > 57)
        {
            goto getNumber;
        }
    }
    if ((length != 16 && length != 13) && length != 15)
    {
        printf("INVALID\n");
    }
    else
    {
        int sum1 = 0, sum2 = 0;
        for (int i=(length-2); i >= 0; i-=2)
        {
            int temp = (number[i] - '0')*2;
            if ((number[i] - '0')*2 <= 9)
            {
                sum1 += ((number[i] - '0')*2);
            }
            else
            {
                while(temp>0){
                    sum1+=(temp%10);
                    temp/=10;
                }
            }
                
        }
        for (int i= (length-1); i >= 0; i-=2)
        {
            sum2 += (number[i]-'0');
        }
        sum2+=sum1;
        if(sum2 % 10 == 0)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    if(flag == 1)
    {
        if( number[0] == '4')
        {
            printf("VISA\n");
        }
        else if (number[0] == '5' && ((number[1] - '0' > 0) && (number[1] - '0' <= 5)))
        {
            printf("MASTERCARD\n");
        }
        else if (number[0] == '3' && (number[1] == '4' || number[1] == '7'))
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (flag == 0)
    {
        printf("INVALID\n");
    }
}