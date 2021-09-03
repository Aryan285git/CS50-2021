#include<stdio.h>
#include<cs50.h>

int main(void)
{
    long n = get_long("Enter the card number\n"); //getting input card number
    long counter1 = 1;
    int counter = 0;
    long t = n;
    while (t != 0)  //counting no. of digits
    {
        t = t / 10;
        counter++;
        counter1 = counter1 * 10;
    } 
    
    int ftwo = n / (counter1 / 100);  //extracting 1st 2 digits
    
    int c = 0;
    
    int sum = 0;
    
    int sum1 = 0;
    
    int r = 0;
    
    int m = 0;
    
    while (n != 0)
    {
        r = n %  10;
        n = n / 10;
        c++;
        if (c % 2 == 0) //checking divisibility by 2
        {
            m = r * 2;
            if (m > 9)  
            {
                sum = sum + (m / 10) + (m % 10); //sum
            }
            else
            {
                sum = sum + m;
            }
        }
        else
        {
            sum1 = sum1 + r;
        }
    }
    int legit = 0;
    if ((sum + sum1) % 10 == 0)//whether card is legit or not
    {
        legit = 1;  //if legit
    }
    if (counter == 15 && (ftwo == 34 || ftwo == 37) && legit == 1)
    {
        printf("AMEX\n");  //american express
    }
    else if (counter == 16 && (ftwo == 51 || ftwo == 52 || ftwo == 53 || ftwo == 54 || ftwo == 55) && legit == 1)
    {
        printf("MASTERCARD\n");  //mastercard
    }
    else if ((counter == 13 || counter == 16) && (ftwo / 10 == 4) && legit == 1)
    {
        printf("VISA\n");  //visa
    }
    else
    {
        printf("INVALID\n");  //invalid
    }
 
}