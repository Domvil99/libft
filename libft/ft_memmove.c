#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;

	if (d > s)  // Caso de solapamiento, copia hacia atrás
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else  // Copia normal hacia adelante
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/*
int main(void)
{
    char src[] = "Hola Mundo";
    char dst[20];

    ft_memmove(dst, src, 10);
    printf("Cadena copiada: %s\n", dst);

    return 0;
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
    char str[] = "Hola, mundo!";
    ft_memmove(str + 6, str, 5);  // Mueve "Hola," sobre sí mismo
    printf("Después de memmove: %s\n", str);
    return (0);
}
*/