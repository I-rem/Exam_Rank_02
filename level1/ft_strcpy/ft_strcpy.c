char *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	do {
		s2[i] = s1[i];
		i++;
	}while (s1[i] != '\0');
	return (s2);
}
