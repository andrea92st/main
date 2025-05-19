

#include "ft_printf.h"
#include <stdio.h>

int main (void)
{
    int nbr = 42;
    char c = 'c';
    int *ptr = &nbr;
    char *str = "TheBUZZZ";
    unsigned int hexa = 9200;

    int len = ft_printf("nombre = %d\n", nbr);
    int tal = printf("nombre = %d\n", nbr);
    int len2 = ft_printf("ptr = %p\n",ptr);
    int tal2 = printf("ptr = %p\n",ptr);
    int len3 = ft_printf("str = %s\n",str);
    int tal3 = printf("str = %s\n",str);
    int len4 = ft_printf("unsigned = %u\n",hexa);
    int tal4 = printf("unsigned = %u\n",hexa);
            int lencheck = len + len2 + len3 + len4;
            int talcheck = tal + tal2 + tal3 + tal4;
            ft_printf("%d %d\n", lencheck, talcheck);
            printf("%d %d\n",lencheck, talcheck);
    int len5 = ft_printf("petit x = %x\n",hexa);
    int tal5 = printf("petit x = %x\n",hexa);
    int len6 = ft_printf("grand X = %X\n",hexa);
    int tal6 = printf("grand X = %X\n",hexa);
    int len7 = ft_printf("char = %c et %%\n",c);
    int tal7 = printf("char = %c et %%\n",c);
            lencheck += len5 + len6 + len7;
            talcheck += tal5 + tal6 + tal7;
            ft_printf("%d %d\n", lencheck, talcheck);
            printf("%d %d\n",lencheck, talcheck);
    return(0);
}