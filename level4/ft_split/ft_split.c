#include <stdlib.h>
char    **ft_split(char *str)
{
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	int len = 0;
	while(str[len])
		len++;
	len--;
	while(str[len] == ' ' || str[len] == 't' || str[len] == '\n')
		len--;
	str[len + 1] = '0';
	
	int wordCount = 1;
	int i = 0;
	while(str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			wordCount++;
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		i++;
	}
	char **words = (char **)malloc(sizeof(char *) * (wordCount + 1));
	i = 0;
	int j = 0;
	while (*str)
	{
		j = 0;
		while(*str != ' ' || *str != '\t' || *str != '0')
		{
			words[i][j] = *str;
			str++;
			j++;
		}
		i++;
	}
	return (words);
}

