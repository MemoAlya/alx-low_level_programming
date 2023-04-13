#include "main.h"

/**
* string_nconcat - a function that concanates two strings.
*
* @s1: first char
* @s2: second char
* @n: unsigned int
*
* Return: If the function fails, it should return NULL
*/
char *string_nconcat(char *s1, char *s2,unsigned int n)
{
unsigned int x, y, z;
char *s;

if (s1 == NULL)
{
x = 0;
}
