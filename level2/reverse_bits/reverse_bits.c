unsigned char	reverse_bits(unsigned char octet)
{
	int i = 0;
	while (i < 8)
	{
		int temp = octet % 2 + '0';
		write(1, &temp, 1);
		octet /= 2;
		i++;
	}
}
