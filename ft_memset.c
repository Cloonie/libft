void *memset(void *str, int c, size_t n)
{
	int i;

	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return(str)
}