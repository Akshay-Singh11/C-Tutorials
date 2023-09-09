#include<stdio.h>
int main()
{
    int num1, num2;
    int sum, difference, product, division;
    char c;

    printf("Enter 1st Number (x) = ");
    scanf("%d",&num1);

    printf("Enter 2nd Number (y) = ");
    scanf("%d",&num2);

    printf("Enter your choice of calculation : \n");
    printf("a -> Sum \n");
    printf("b -> Difference \n");
    printf("c -> Product \n");
    printf("d -> Division \n");

    scanf("%c",&c);

    switch (c)
    {
        case 'a':
        {
            sum = num1 + num2;
            printf("Sum = %d",sum);
            break;
        }

        case 'b':
        {
            difference = num1 - num2;
            printf("Difference = %d",difference);
            break;
        }
        
        case 'c':
        {
            product = num1 * num2;
            printf("Product = %d",product);
            break;
        }

        case 'd':
        {
            division = num1 / num2;
            printf("Division = %d",division);
            break;
        }

        default:
        {
            printf("You have entered a wrong choice!! \n");
            printf("Try Again!");
            break;
        }
    }

    return 0;
}