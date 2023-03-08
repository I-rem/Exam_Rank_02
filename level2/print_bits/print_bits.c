#include <unistd.h>
void	print_bits(unsigned char octet)
{
	int i = 0;
	int bits[8];
	while (i < 8)
	{
		bits[i] = octet % 2 + '0';
		octet /= 2;
		i++;
	}
	i = 7;
	while (i >= 0)
	{
		write(1, &bits[i], 1);
		i--;
	}
}
