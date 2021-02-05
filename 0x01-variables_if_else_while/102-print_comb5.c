#include <stdio.h>
/**
 *main - entry point
 *Description: random number in n +ve/-ve
 *Return: 0 on success
 */
int main(void)
{
int n, k, l, m;
for (n = '0'; n <= '9'; n++)
{
for (m = '0'; m <= '9'; m++)
{
for (k = '0'; k <= '9'; k++)
{
for (l = '1'; l <= '9'; l++)
{
if ((n < k && m > l) || (n < k && m == l) || (n < k && m <= l) || (n == k && m < l))
{
putchar(n);
putchar(m);
putchar(' ');
putchar(k);
putchar(l);
if (n == '9' && m == '8' && k == '9' && l == '9')
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
