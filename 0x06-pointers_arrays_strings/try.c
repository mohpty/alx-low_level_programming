#include <stdio.h>
#include <string.h>

int main(void)
{
	char* s1 = "A";
	char* s2 = "BH";
	char* s3 = "B";
	char* s4 = "BB";

	printf("%d\n", strcmp(s4, s3));
	printf("%d\n", strcmp(s3, s4));

	return (0);
}
