#include <stdio.h>

int main(void)
{
	char *s = "";
	char *p = s;
	for (int i = 65; i < 50; i++)
	{
		*s = (char)i;
		s++;
	}

	printf("%s\n", s);

	return (0);
}
