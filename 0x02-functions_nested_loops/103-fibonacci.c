#include "main.h"
/**
 * main - fibonacci sequence
 * Return: 0 on success
 */
int main(void)
{
        long int i, num1, num2, next, sum;

        num1 = 1;
        num2 = 1;
        sum = 0;
        while (next < 4000000)
        {
                next =  num1 + num2;
                num1 = num2;
                num2 = next;
                if (next % 2 == 0)
                        sum += next;
        }
        printf("%li\n", sum);
}
