#include "libft.h"
#include <stdio.h>

int main(void)
{
    int *arr;
    int i;

    arr = (int *)ft_calloc(5, sizeof(int));
    if (!arr)
    {
        printf("Error: `ft_calloc` devolvió NULL\n");
        return (1);
    }

    // Verificar si los valores están inicializados a 0
    for (i = 0; i < 5; i++)
        printf("arr[%d] = %d\n", i, arr[i]);

    free(arr); // Liberar la memoria asignada

    return (0);
}