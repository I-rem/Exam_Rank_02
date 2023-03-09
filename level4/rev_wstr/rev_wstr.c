#include <unistd.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		int len = 0;
		int i;
		
		while (argv[1][len])
			len++;
		len--;
		while (len > 0)
		{
			while (argv[1][len] != ' ' && argv[1][len] != '\t' && len != 0)
				len--;
			i = len + 1;
			if (i == 1)
				i = 0;
			while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			write(1, " ", 1);
			len--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
