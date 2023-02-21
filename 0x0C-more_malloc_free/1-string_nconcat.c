#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**string_nconcat -  does to two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the amount of s2 to be used
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mal;
	unsigned int len, j, k, i;
	unsigned int len1;
	
	len = 0;

	len1 = 0;

	while (s1[len] != '\0')
	{
		len++;
	}

	while (s2[len1] != '\0')
	{
		len1++;
	}

	if (n >= len1)
	{
		len1 = len1;
	}
	if (n < len1)
	{
		len1 = n;
	}

	mal = (char *)malloc(sizeof(char *) * (len + len1 + 1));

	j = 0;

	while(s1[i] != '\0')
	{
		mal[i] = s1[i];
		j++;	
		i++;	
	}
	j = j + 1;
	k = 0;
	while (s2[k] != '\0')
	{
		mal[j] = s2[k]; 
	}

	return(mal);
}
