#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	i = 1;
		while (i <= 9)
		{
			char temp;
			temp = i + '0';
			write(1, &temp, 1);
			write(1, " x ", 3);
			int j = 0;
			while (argv[1][j])
			{
				write(1, &argv[1][j], 1);
				j++;
			}
			write(1," = ", 3);
			
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
