#include <unistd.h>

int main(void)
{
        int num = 1;
        while (num <= 100)
        {
			if (num % 3 == 0)
				write(1, "fizz", 4);
			if (num % 5 == 0)
				write(1, "buzz", 4);
			if (num % 5 != 0 && num % 3 != 0)
				{
					char temp1 = (char)num;
					char temp2;
					temp2 = temp1 / 10 + '0';
					if (temp2 != '0')
						write(1, &temp2, 1);
					temp2 = temp1 % 10 + '0';
					write(1, &temp2, 1);
	
				}
			write (1, "\n", 1);
			num++;
        }
        return (0);
}

