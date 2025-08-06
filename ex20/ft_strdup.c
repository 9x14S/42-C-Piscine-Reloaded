#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*result;

	if (NULL == src)
		return (NULL);
	len = ft_strlen(src);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (NULL == result)
		return (NULL);
	while (len >= 0)
	{
		result[len] = src[len];
		len--;
	}
	return (result);
}
