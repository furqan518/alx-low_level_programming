#include "main.h"

/**
 * _isalpha - checks for char alphabet
 * @c: the char to be checked *
 * Return: 1 if char is letter upper or lower, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'));
}
