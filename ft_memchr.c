#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	i = 0;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	char s[] = "rastfari";
	printf("%s\n", s);
	char *p = ft_memchr(s, 's', 4);
	char *p = memchr(s, 's', 4);
	printf("%s", p);
	return(0);
}*/