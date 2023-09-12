#include <stdlib.h>
#include <stdio.h>
int *ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*buffer;
	int	*d;

	if (min >= max)
		return 0;

	range = max - min;
	d = (buffer = malloc(range * sizeof(int)));
	if (!d)
		return 0;

	i = 0;
	while (i < range)
	{
		buffer[i] = min + i;
		i++;
	}
	
	return buffer;
}

int	main()	
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);

	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	free(tab);

	return 0;
}
