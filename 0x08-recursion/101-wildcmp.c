#include "main.h"

int __wildcmp(char *s1, char *s2, int ast);

/**
 * wildcmp - compare two strings by some weird standard
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: 1 if they match, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return __wildcmp(s1, s2, 0);
}

/**
 * __wildcmp - compare two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * ast: flag to pause right pointer
 * Return: 1 if they match, 0 otherwise
 */
int __wildcmp(char *s1, char *s2, int ast)
{
	/*
	 * Normal mode:
	 * 	check s1 and s2:
	 * 		if match: continue to next letters
	 * 		if not: break and return false
	 *
	 * 	if s2 == '*':
	 * 		move s2 one and start astrik mode
	 *
	 * 	if s2 == \0 and astrik mode is on return true
	 *
	 * 	if s1 != s2:
	 * 		if astrik: s2++
	 * 		else return false
	 * 	
	 * */

	if (*s2 == '*')
		return __wildcmp(s1, s2 + 1, 1);
	
	if (*s2 == '\0' && ast)
		return 1;

	if (*s1 == '\0' && ast)
		return 0;

	if (*s1 == *s2)
	{
		if (*s1 != '\0')
			return __wildcmp(s1 + 1, s2 + 1, 0);
		else
			return 1;
	}

	else
	{
		if (ast)
			return __wildcmp(s1 + 1, s2, 1);
		else
			return 0;
	}
}
