#include "main.h"
/**
 * cap_string -capitalize words
 * @str: the tring
 * Return: pointer
 */
char *cap_string(char *str)
{
	int inde = 0;

	while (str[inde])
	{
		while (!(str[inde] >= 'a' && str[inde] <= 'z'))
		{
			if (str[inde - 1] == '' || str[inde - 1] == '\t' || 
					str[inde - 1] == '\n' || str[inde - 1] == ',' || 
					str[inde - 1] == '.' || str[inde - 1] == ';' || 
					str[inde - 1] == '!' || str[inde - 1] == '?' || 
					str[inde - 1] == '"' || str[inde - 1] == '(' || 
					str[inde - 1] == ')' || str[inde - 1] == '{' || 
					str[inde - 1] == '}' || inde == 0)
				str[inde] = str[inde] - 32;
			inde++;
			
		}
	}
	return (str);
}
