#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_palindrome("lucy");
    printf("%d\n", r);
    r = is_palindrome("in");
    printf("%d\n", r);
    r = is_palindrome("diamaid");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}
