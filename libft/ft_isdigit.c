#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
 int main(void)
 {
 	char c = '5';
 	if (ft_isdigit(c))
 		printf("%c es un dígito.\n", c);
 	else
 		printf("%c no es un dígito.\n", c);
 	return (0);
 }
*/

/*
#include "libft.h"
#include <stdio.h>

int	main(void)
{
    printf("ft_isdigit('5') = %d\n", ft_isdigit('5'));
    printf("ft_isdigit('A') = %d\n", ft_isdigit('A'));
    return (0);
}
*/