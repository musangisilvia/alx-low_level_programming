#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
  *minCoins - finds minimum coins to make a given change.
  *@amount: amount given.
  *@coinrange: array of coins.
  *@m: sizeof coinrange / coinrange[0].
  *
  *Return: number of coins.
  */
int minCoins(int amount, int coinrange[], int m)
{
	int i, change = INT_MAX, sub_change;

	/* base case */
	if (amount == 0)
	{
		return (0);
	}
	/* try every coin smaller than amount*/
	for (i = 0; i < m; i++)
	{
		if (coinrange[i] <= amount)
		{
			sub_change = minCoins(amount - coinrange[i], coinrange, m);
			/*check for INT_MAX to avoid overflow and see if the change can*/
			 /*be minimized*/
			if ((sub_change != INT_MAX) && (sub_change + 1 < change))
			{
				change = sub_change + 1;
			}
		}
	}
	return (change);
}
/**
  *main - prints minimum number of coins to make change for an amount of money.
  *@argc: number of argumenta passed.
  *@argv: pointer to array of size argc, containing arguments passed.
  *
  *Return: 0 on success and 1 on error.
  */
int main(int argc, char *argv[])
{
	int amount, coins[5], m;

	if (argc == 2)
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
			return (0);
		}

		amount = atoi(argv[1]);
		coins[0] = 25;
		coins[1] = 10;
		coins[2] = 5;
		coins[3] = 2;
		coins[4] = 1;
		m = sizeof(coins) / sizeof(coins[0]);

		printf("%d\n", minCoins(amount, coins, m));
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

