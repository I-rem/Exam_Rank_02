#include <stdlib.h>
char    *ft_strdup(char *src)
{
	int len = 0;
	while (src[len])
		len++;
	char *dest;
	dest = (char *)malloc (sizeof(char) * (len + 1));
	int i = 0;
	do{
		dest[i] = src[i];
		i++;
	}while (src[i]);
	return (dest);
}
