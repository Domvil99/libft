#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}  
/*
 int main(void)
 {
 	char c = '5';
 	if (ft_isalnum(c))      
 		printf("%c es un carácter alfanumérico.\n", c);
 	else
 		printf("%c no es un carácter alfanumérico.\n", c);

 	return (0);
 }
*/ 

/*
#include <stdio.h>

int	main(void)
{
    printf("ft_isalnum('A') = %d\n", ft_isalnum('A'));
    printf("ft_isalnum('5') = %d\n", ft_isalnum('5'));
    printf("ft_isalnum('!') = %d\n", ft_isalnum('!'));
    return (0);
}
*/