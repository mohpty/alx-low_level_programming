#include <stdio.h>

/**
 * main - print all the combinations
 * Return: 0
 */
int main(void)
{
	int i,j,k,l;

	for(i = 48; i < 58; i++)
	{
		for(j = 48; j < 57; j++)
		{
			k = i;
			l = j + 1;
			for(; k < 58 ; ++k)
			{
				for(; l < 58 ; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					
					if(i != 57 || j != 56 || k != 57 || l != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				
			}
		}
	}

	return (0);
}
