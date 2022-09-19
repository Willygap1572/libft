#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char			*q;
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(dst);
	q = dst;
	while (*q != '\0')
		q++;
	if (dstsize > len)
	{
		while (src[i] != '\0' && i < dstsize - len - 1)
		{
			*q = src[i];
			i++;
			q++;
		}
		*q = '\0';
	}
	if (dstsize < len)
		return (ft_strlen(src) + dstsize);
	else
		return (len + ft_strlen(src));
}
/*
int main()
{
	char *dest = NULL;
	
	dest = (char *)malloc(sizeof(*dest) * 15);
	ft_memset(dest, 'r', 15);
	ft_strlcat(dest, "lorem ipsum dolor sit amet", 6);
}*/