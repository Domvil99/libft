#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[] = "Hola Mundo";
    char dst[20];

    ft_memcpy(dst, src, 10);
    printf("Cadena copiada: %s\n", dst);

    return 0;
}
*/    

