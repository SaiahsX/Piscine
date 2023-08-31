#include<unistd.h>
int main(void)
{
	char	s;


	s = 106;

	write(1, &s, 1);
	write(1, "\n", 1);
}
