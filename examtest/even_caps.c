void	*ft_even_caps(char *str)
{
/*	int i;
	int c;

	i = 0;
	c = 1;
	while(str[i] != '\0')
	{	
		if (c == 1 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
			c = 0;
		}
		else if ((c == 1 && str[i] >= 65 && str[i] <= 90)
			|| (str[i] >= 48 && str[i] <= 57))
		{
			str[i] = str[i] + 32;
			c = 0;
		}
		else if (c == 0 && str[i] >= 97 && str[i] <= 122)
			str[i] = str[i];
			c = 1;
		i++;
	}
	return (str);
}*/

	int i;

	i = 0;

	while (str[i] != '\0')
{
	if (str[i] == " ")

	 if ((i%2 ==0)&& str[i] >= 97 && str[i] <= 122)
	{
		str[i] = str[i];
	}
	else if ((i%2 != 0) && str[i] >= 97 && str[i] <= 122)
	{
		str[i] = str[i] - 32;
	}
	if ((i%2 ==0)&& str[i] >= 65 && str[i] <= 90)
	{
		str[i] = str[i] + 32;
	}
	i++;
}return (str);
}
							




#include<stdio.h>

int main(void)
{
	char s[] = "tHedaYisBright";

	printf("%s\n",ft_even_caps(s));
	return (0);
}
