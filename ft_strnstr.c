#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] != '\0' && big[i + j] == little[j]
			&& (j + i) < len && big[i + j] != '\0')
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	char b[] = "lorem ipsum dolor sit amet";
	char l[] = "ipsumm";
	printf("%s", ft_strnstr(b, l, 30));
	return(0);
}*/
