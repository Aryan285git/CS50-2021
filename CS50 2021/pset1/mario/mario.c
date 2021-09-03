#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int height;     //declaring height
    do
    {
        height = get_int("Enter the height\n");  //entering height
    }
    while (height < 1 || height > 8);    //checking greater than 8 or less than 1
    
    for (int i = 1; i <= height; i++)  //loop 1 for rows
    {
        for (int k = height - 1; k >= i; k--)  // loop for spaces
        {
            printf(" ");  //spaces
        }
         
        for (int j = 1; j <= i; j++) //loop for #
        {
            printf("#"); //#
        }
        printf("\n"); //leaving line
    }
    
    
}