#include <unistd.h>

int is_prime(int num)
{
	int i = 2;
	while (i <= num / 2)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int ft_atoi (char *s)
{
	int result = 0;
	while (*s)
	{
		result = result * 10 + *s - '0';
		s++;
	}
	return (result);
}

void putnbr(int num)
{
	char temp;
	if (num  < 10)
	{
		temp = num + '0';
		write(1, &temp, 1);
	}
	else
	{
		putnbr(num / 10);
		putnbr (num % 10);
	}
}

int main(int argc, char **argv)
{
	if (argc == 2 && *argv[1] != '1' && *argv[1] != '2')
	{
		int sum = 0;
		int num = ft_atoi (argv[1]);
		int i = 2;
		while (i <= num)
		{						
			if (is_prime(i) == 1)
				sum += i;
			i++;
		}
		putnbr(sum);
		write(1, "\n", 1);		
	}
	else
		write(1, "0\n", 2);
	return (0);
}
