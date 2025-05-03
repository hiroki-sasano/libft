 # include "libft.h"

void	del_content(void *content)
{
	free(content);
}

void	print_content(void *content)
{
	printf("%d\n", *(int *)content);
}

void	print_char_content(void *content)
{
	printf("%s\n", (char *)content);
}

void	*ft_atoi_wrapper(void *content)
{
	int		*nbr;
	char	*str;

	str = (char *)content;
	nbr = malloc(sizeof(int));
	if (!nbr)
		return (NULL);
	*nbr = ft_atoi(str);
	return ((void *)nbr);
}

int	main(void)
{
	const char *nums[] = {"0", "1", "2", "3", "4",
		"5", "6", "7", "8", "9"};

	t_list *head = NULL;
	t_list *tail = NULL;
	t_list *result;

	for (int i = 0; i < 10; i++)
	{
		t_list *new_node = malloc(sizeof(t_list));
		if (!new_node)
			return (1);
		new_node->content = strdup(nums[i]);
		if (!new_node->content)
		{
			free(new_node);
			return (1);
		}
		new_node->next = NULL;

		if (!head)
			head = new_node;
		else
			tail->next = new_node;
		tail = new_node;
	}

	ft_lstiter(head, print_char_content);

	result = ft_lstmap( head, ft_atoi_wrapper, del_content);
	
	ft_lstiter(result, print_content);

	ft_lstclear(&result, del_content); 

	return (0);
}
/* ccw main.c -L. -lft

 cc main.c ./libft.a*/