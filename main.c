#include <stdio.h>
#include "libft.h"

/*int main()
{
	char dest[10];
	const char *src = "aa";
	printf("res from ft = %li\n", ft_strlcpy(dest, src, 2)); 
	printf("%s\n", dest);
}*/

int main()
{
	char dest[20];
	char *src = "aa";
	printf("ft_strlcpy = %li\n", ft_strlcpy(dest, src, 3));
	printf("ft_strlcpy = %s\n", dest);

	char s[20];
	int c = 'a';
	size_t count = 12;
	ft_memset(s, c, count);
	printf("ft_memset = %s\n", s);

	char a[20] = "aaaa";
	size_t q = 2;
	ft_bzero(a, q);
	printf("ft_bzero = >%s<\n", a);

	char b[20] = "bb";
	char *src1 = "";
	size_t qq = 7;
	ft_memcpy(b, src1, qq);
	printf("ft_memcpy = >%s<\n", b);

	char xx[20] = "aaaa";
	char *mm = "efgh";
	printf("strlcat = >%s<\n", xx);
	size_t vv = 3;
	
	printf("strlcat = >%ld<\n", ft_strlcat(xx, mm, vv));
	printf("strlcat = >%s<\n", xx);
	printf("strlen = >%d<\n", ft_strlen(xx));

}