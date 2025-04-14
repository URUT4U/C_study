#include <stdio.h>

void	show_size(int array[])
{
	printf("Inside the function :)\n");
	printf("sizeof(arr) = %lu\n", sizeof(array));
	printf("sizeof(arr[0]) = %lu\n", sizeof(array[0]));
	printf("Your array has %lu elements?\n", sizeof(array) / sizeof(array[0]));
	return ((void)0);
}

int	main(void)
{
	int	arr[5] = {1, 2, 3, 4, 5};

	printf("Inside the main: \n");
	printf("sizeof(arr) = %lu\n", sizeof(arr));
	printf("sizeof(arr[0]) = %lu\n", sizeof(arr[0]));
	printf("Your array has %lu elements! remeber that\n---\n", sizeof(arr) / sizeof(arr[0]));
	show_size(arr);
	return (0);
}

/* Em suma, apenas use o truque de aritmetica para saber tamanho do array
 * quando você estiver dentro do escopo onde o seu array foi criado. */
