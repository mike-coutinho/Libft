#include <string.h>
#include <stdio.h>

int main(void)
{
    char str[5];
    printf("Before memset: %s\n", str);

    memset(str, 'x', 5);

    printf("After memset: %s\n", str);


	char a[20] = "aaaaaa";
	printf("ft_bzero = >%s<\n", a);
	size_t q = -2;
	bzero(a, q);
	printf("ft_bzero = >%s<\n", a);


    return 0;
}



/*void *ft_memset(void *dest, int c, size_t n)
{
    size_t          i;
    unsigned char   *ptr;

    i = 0;
    ptr = dest;
    while (i < n)
    {
        ptr[i] = c;
        i++;
    }
    return (dest);
}

#include <stdio.h>
int main(void)
{
    char str[10];
    printf("Before memset: %s\n", str);

    ft_memset(str, 'x', 5);

    printf("After memset: %s\n", str);
    return 0;
}*/