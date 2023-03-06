#include<unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		while (argv[1][i] != '\0')
		{
			char temp = argv[1][i];
			if ((temp >= 'a' && temp <= 'z') || (temp >= 'A' && temp <= 'Z'))
			{
			
				if ((temp > 'a' + 13 && temp <= 'z') || (temp > 'A' + 13 && temp <= 'Z'))
					temp -= 13;
				else
					temp += 13;
			}
			write(1, &temp, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
