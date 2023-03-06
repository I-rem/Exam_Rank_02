#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	i = 0;
		while (argv[1][i])
		{
			char temp = argv[1][i];
			if (temp >= 'a' && temp <= 'z')
			{
					if (temp < 'n')
						temp = 'a' + 'z' - temp;
					else if (temp > 'n')
						temp = 'a' + 'z' - temp;
			}
			else if (temp >= 'A' && temp <= 'Z')
			{
				if (temp < 'N')
					temp = 'A' + 'Z' - temp;
				else if (temp > 'N')
					temp = 'A' + 'Z' - temp;
			}
			write(1, &temp, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
