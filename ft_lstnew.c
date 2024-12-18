#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
int	main(void)
{
	t_list	*node;
	char	p[] = "new";

	node = ft_lstnew(p);
	if (node)
	{
		printf("Content: %s\n", (char *)(node->content));
		printf("Next: %p\n", (void *)node->next);
		free(node);
	}
	else
		printf("Fail\n");
	return(0);
}*/