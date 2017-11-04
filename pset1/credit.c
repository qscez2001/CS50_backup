#include<stdio.h>
#include<cs50.h>

int main(void)
{

    printf("Number: ");
    long long cc_number = get_long_long();
    //printf("cc_number: %lld \n", cc_number);
    
    long long last_digit_2 = cc_number / 10 % 10;
    //printf("last_digit_2: %lld \n", last_digit_2);
    
    long long last_digit_4 = cc_number / 1000 % 10;
    //printf("last_digit_4: %lld \n", last_digit_4);
    
    long long last_digit_6 = cc_number / 100000 % 10;
    //printf("last_digit_6: %lld \n", last_digit_6);
    
    long long last_digit_8 = cc_number / 10000000 % 10;
    //printf("last_digit_8: %lld \n", last_digit_8);
    
    long long last_digit_10 = cc_number / 1000000000 % 10;
    //printf("last_digit_10: %lld \n", last_digit_10);
    
    long long last_digit_12 = cc_number / 100000000000 % 10;
    //printf("last_digit_12: %lld \n", last_digit_12);
    
    long long last_digit_14 = cc_number / 10000000000000 % 10;
    //printf("last_digit_14: %lld \n", last_digit_14);
    
    long long last_digit_16 = cc_number / 1000000000000000 % 10;
    //printf("last_digit_16: %lld \n", last_digit_16);

    //ten 
    //long long product14_digit = last_digit_14 / 10 % 10;
    //個位數
    //long long product14_digit = last_digit_14 % 10;
    long long sum =  last_digit_2*2/10 + last_digit_2*2%10 +
                     last_digit_4*2/10 + last_digit_4*2%10 +
                     last_digit_6*2/10 + last_digit_6*2%10 +
                     last_digit_8*2/10 + last_digit_8*2%10 +
                     last_digit_10*2/10 + last_digit_10*2%10 +
                     last_digit_12*2/10 + last_digit_12*2%10 +
                     last_digit_14*2/10 + last_digit_14*2%10 +
                     last_digit_16*2/10 + last_digit_16*2%10 ;
                    
    //printf("sum: %lld \n", sum);
    
    long long last_digit_1 = cc_number % 10;
    //printf("last_digit_1: %lld \n", last_digit_1);

    long long last_digit_3 = cc_number / 100 % 10;
    //printf("last_digit_3: %lld \n", last_digit_3);

    long long last_digit_5 = cc_number / 10000 % 10;
    //printf("last_digit_5: %lld \n", last_digit_5);

    long long last_digit_7 = cc_number / 1000000 % 10;
    //printf("last_digit_7: %lld \n", last_digit_7);

    long long last_digit_9 = cc_number / 100000000 % 10;
    //printf("last_digit_9: %lld \n", last_digit_9);
    
    long long last_digit_11 = cc_number / 10000000000 % 10;
    //printf("last_digit_11: %lld \n", last_digit_11);
    
    long long last_digit_13 = cc_number / 1000000000000 % 10;
    //printf("last_digit_13: %lld \n", last_digit_13);
    
    long long last_digit_15 = cc_number / 100000000000000 % 10;
    //printf("last_digit_15: %lld \n", last_digit_15);

    long long total = sum + last_digit_1+last_digit_3+last_digit_5+last_digit_7+last_digit_9+last_digit_11+last_digit_13+last_digit_15;
    //printf("total: %lld \n", total);
    
    //printf("total/10: %lld \n", total/10);
    //printf("total/10000000000000: %lld \n", total/10000000000000);
    if (total%10 == 0)
    {
        //printf("entered if \n");
        
        //printf("total/100000000000000 %lld \n", total/100000000000000);
        
        if (cc_number/100000000000000 == 51 || cc_number/100000000000000 == 52 || cc_number/100000000000000 == 53 || cc_number/100000000000000 == 54 || cc_number/100000000000000 == 55)
        {
            printf("MASTERCARD\n");
        }
        else if(cc_number/1000000000000000 == 4 || cc_number/10000000000000 == 4)
        {
            printf("VISA\n");
        }
        else if (cc_number/10000000000000 == 34 || cc_number/10000000000000 == 37)
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
        
    }

    // else if (total/10000000000000 == 34 || total/10000000000000 == 37)
    // {
    //     printf("Amex");
    // }
    // else if (total/10000000000000 == 4)
    // {
    //     printf("Visa");
    // }
    // else
    // {
    //     printf("INVALID");
    // }

}
    
    
    