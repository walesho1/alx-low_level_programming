#include "main.h"

int _strlen_recursion(char *);
int palindrome_checker(char *, int, int);

/**
 * is_palindrome - Determines if s is a palindrome
 * @s: string to be evaluated
 *
 * Return: 1 (Palindrome) or 0 (Not palindrome)
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);

	return (palindrome_checker(s, 0, length - 1));
}
