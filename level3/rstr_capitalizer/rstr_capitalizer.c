#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		int i = 0;
		int j = 1;
		while (argv[j])
		{
			int len = 0;
			int i = 0;
			while (argv[j][len])
				len++;
			len--;
			while (argv[j][len] == ' ' || argv[j][len] == '\t')
				len--;
			while (argv[j][i])
			{
				if (argv[j][i + 1] == ' ' || argv[j][i + 1] == '\t' || argv[j][i + 1] == '\0')
				{
					if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
					argv[j][i] -= 32;
				}
				else
				{
					if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
						argv[j][i] += 32;
				}
				write(1, &argv[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
