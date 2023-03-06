#include<unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		while (argv[1][i] != '\0')
		{
			char temp = argv[1][i];
			if (temp >= 'a' && temp <= 'z')
				temp -= 'a' - 'A';
			else if (temp >= 'A' && temp <= 'Z')
				temp += 'a' - 'A';
			write(1, &temp, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

