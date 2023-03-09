char *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	do {
		s1[i] = s2[i];
		i++;
	}while (s2[i] != '\0');
	return (s1);
}
