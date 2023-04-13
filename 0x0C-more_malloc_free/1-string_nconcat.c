#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two string
 * @s1: pointer to first string
 * @s2: ponter to second string
 * @n: number of bytes of n2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_length, s2_length;

	if (s1 == NULL)
		i = 0;
	if (s2 == NULL)
		j = 0;
	/* calculate the length of the strings s1 , s2*/

	for (s1_length = 0; s1[s1_length] != '\0'; s1_lenght++)
			;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_lenght++)
			;
	/*memory reservation for case 1 and 2*/
	str = malloc(s1_length + n + 1);
	if (str == NULL)
		return (NULL);
	/*copy strings into str*/
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++
	}

	str[i] = '\0';
	return (str);
}
