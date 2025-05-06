#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/* 
#include <stddef.h> // Para size_t
#include <string.h> // Para memset
#include <stdio.h>  // Para printf

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
int main(void)
{
    char str[50] = "Hola Mundo";
    printf("Cadena original: %s\n", str);
    ft_bzero(str, 5);
    printf("Cadena después de ft_bzero: %s\n", str);
    return 0;
}

int	main(void)
{
    char str[] = "Hola Mundo!";
    printf("Antes bzero: %s\n", str);
    ft_bzero(str, 5);
    printf("Después bzero (primeros 5 bytes): %s\n", str + 2);
    return (0);
}
*/