#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		int j = 0;
		int temp;
		while (argv[1][i] && argv[2][j])
		{
			while (argv[1][i] != argv[2][j])
				j++;
			temp = 0;
			while (temp < i && argv[1][i] != argv[1][temp])
				temp++;
			if (temp == i)
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
