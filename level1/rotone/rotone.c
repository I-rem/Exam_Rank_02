#include<unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		while (argv[1][i] != '\0')
		{
			char temp = argv[1][i];
			if (temp == 'z')
				temp = 'a';
			else if (temp == 'Z')
				temp = 'A';
			else
				temp++;
			write(1, &temp, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
