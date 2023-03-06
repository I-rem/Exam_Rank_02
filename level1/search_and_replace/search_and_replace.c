#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
	{
		int i = 0;
		while (argv[1][i] != '\0')
		{
			char temp = argv[1][i];
			if (temp == *argv[2])
				temp = *argv[3];
			write(1, &temp, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
