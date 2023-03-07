#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		int temp;
		while (argv[1][i])
		{
			temp = 0;
			while (temp < i && argv[1][i] != argv[1][temp])
				temp++;
			if (temp == i)
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			temp = 0;
			while (argv[1][temp] && argv[1][temp] != argv[2][i])
				temp++;
			if (argv[1][temp] == '\0')
			{
				temp = 0;
				while (argv[2][temp] && argv[2][temp] != argv[2][i])
					temp++;
			}
			if (temp == i)
				write(1, &argv[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
