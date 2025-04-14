//#include <stdio.h>

//binary search with overflow protection on mid assignment.
int	binary_search(const int *list, int len, int res)
{
	int	top;
	int	mid;
	int	bot;
	int	guess;

	top = len - 1;
	bot = 0;
	guess = 0;
	while (bot <= top)
	{
		mid = bot + (top - bot) / 2;
		guess = list[mid];
		if (guess < res)
			bot = mid + 1;
		else if (guess > res)
			top = mid - 1;
		else
			return (mid);
	}
	return (-1);
}

/*TEST
int	main(void)
{
	int num_list[100];
	int	i;
	int	n;
	int len;
	int	res = 20;

	i = 1;
	n = 0;
	while (i <= 100)
	{	
		num_list[n] = i * 2;
		printf("num_list[%d] = %d\n", n, num_list[n]);
		i++;
		n++;
	}
	len = sizeof(num_list) / sizeof(num_list[0]);
	printf("Found %d in the position [%d]\n", res, binary_search(num_list, len, res));
	return (0);
}
*/
