#include <stdio.h>
#include <string.h>

int main(void)
{
	char *s = "hello, helllo\n";
	char *p = "oleh";
	unsigned int n;

	n = strspn(s, p);
	printf("%u\n", n);
	return (0);
}
