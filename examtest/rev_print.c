#include<unistd.h>

void	*rev_print(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
/*	while (i > 0)
	{*/
		write(1, &str[i - 1], 1);
		i--;
/*	}*/
	return (str);
}

int main(void)
{
	rev_print("hello world");
	write(1, "\n", 1);
	return (0);
}
