#include <stdio.h>
// int main()
// {
// 	int n, r, sum = 0, temp;
// 	printf("enter the number=");
// 	scanf("%d", &n);
// 	temp = n;
// 	while (n > 0)
// 	{
// 		r = n % 10;
// 		sum = sum + (r * r * r);
// 		n = n / 10;
// 	}
// 	if (temp == sum)
// 		printf("armstrong  number ");
// 	else
// 		printf("not armstrong number");
// 	return 0;
// }

// /*When the sum of the cube of the individual digits of a number
//  is equal to that number, the number is called Armstrong number. For example 153.
// Sum of its divisor is 13 + 53;+ 33; = 1+125+27 = 153*/
// // Print Armstrong Number in a given range
// #include <stdio.h>
// void main()
// {
// 	int num, rem, sum, temp;
// 	int start = 1, end;

// 	printf("Enter number (n) : ");
// 	scanf("%d", &end);

// 	printf("Armstrong numbers in given range are: ");
// 	for (num = start; num <= end; num++)
// 	{
// 		temp = num;
// 		sum = 0;
// 		while (temp != 0)
// 		{
// 			rem = temp % 10;
// 			temp = temp / 10;
// 			sum = sum + (rem * rem * rem);
// 		}
// 		if (sum == num)
// 			printf("%d ", num);
// 	}
// 	printf("\n");
// }