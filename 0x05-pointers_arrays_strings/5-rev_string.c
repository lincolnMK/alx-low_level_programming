#include "main.h"
/**
 *
 */
void rev_string(char *s)
{
	int i, j, len;
	char tmp;	
	len = 0;
		
	while (s[len] != '\0')
	{
		len++;
	}
	j = len -1;

	for (i = 0; (i < (len / 2)); i++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j--] =tmp;
	}
	
	 
}
