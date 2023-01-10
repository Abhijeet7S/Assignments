/*
 * Assignment - 3
 * Question - 10
 * @topic - Decision Control Statement
 * @author - Abhijeet Kumar Singh
 */

 /* Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.
*/

#include<stdio.h>
int main()
{
    float cost_price, selling_price, result;
    printf("Enter the cost prie and selling price\n");
    scanf("%f %f", &cost_price, &selling_price);

    result = selling_price - cost_price;
    if(result > 0)
    {
           printf("Profit = %f\n", result);
           printf("Profit Percent = %.2f", (result / cost_price) * 100);
    }
    else if(result == 0)
        printf("Neither be Loss Nor be Profit\n");
        else
    {
        printf("Loss = %f\n", -(result));
           printf("Loss Percent = %.2f", (-(result) * 100) / cost_price);
    }

    return 0;

}

