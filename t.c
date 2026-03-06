char *ft_itoa(int n)
{
	char *res;
	int i;
	int k;
	int sign;

	sign = 1;
	i = 0;
	k = 1;
	if (n < 0)
	{
		n *= -1;
		sign *= -1;
		res = malloc(sizeof(char) * (ft_intlen(n) + 2));
		res[0] = '-';
		i++;
	}
	else
		res = malloc(sizeof(char) * (ft_intlen(n) + 1));
	while (n / k > 9)
		k *= 10;
	while (k > 0)
	{
		res[i] = ((n / k) % 10) + '0';
		k /= 10;
		i++;
	}
	res[i] = '\0';
	return (res);
}




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
	size_t q = 2;
	bzero(a, q);
	printf("ft_bzero = >%s<\n", a);


	char xx[20] = "aaaa";
	char *mm = "efgh";
	printf("strlcat = >%s<\n", xx);
	size_t vv = 3;
	
	printf("strlcat = >%ld<\n", strlcat(xx, mm, vv));
	printf("strlcat = >%s<\n", xx);
	printf("strlen = >%ld<\n", strlen(xx));
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