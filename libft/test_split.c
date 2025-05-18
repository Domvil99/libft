#include "libft.h"
#include <stdio.h>

int	main(void)
{
    char **result;
    int i;

    result = ft_split("Hola mundo desde Libft", ' ');
    if (!result)
    {
        printf("Error: `ft_split` devolvió NULL\n");
        return (1);
    }

    // Imprimir cada palabra generada por ft_split
    i = 0;
    while (result[i])
    {
        printf("result[%d] = %s\n", i, result[i]);
        free(result[i]); // Liberar cada subcadena
        i++;
    }
    free(result); // Liberar el array principal

    return (0);
}