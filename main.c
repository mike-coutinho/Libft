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
	char *mm = "efg";
	printf("strlcat = >%s<\n", xx);
	size_t vv = 0;
	
	printf("strlcat = >%ld<\n", ft_strlcat(xx, mm, vv));
	printf("strlcat = >%s<\n", xx);
	printf("strlen = >%ld<\n", ft_strlen(xx));


	char *cmp = "adaa";
	char *cmp1 = "adaa";
	size_t cmp2 = 6;
	
	printf("strncmp = >%i<\n", ft_strncmp(cmp, cmp1, cmp2));

	

	char cmp5[] = "adav";
	char cmp6[] = "adaa";
	size_t cmp7 = 4;
	
	printf("memcmp = >%i<\n", ft_memcmp(cmp5, cmp6, cmp7));

	



	char po1[20];
	char *po2 = "aa";
	po2 = ft_memmove(po1, po2, 3);
	int av = 0;
	
	

	char cmp4[] = "adcaa";
	char s64[] = {0, 1, 2 ,3 ,4 ,5};
	int bg = 'a';
	size_t cmp3 = 3;
	
	char *lok = ft_memchr(s64, 0, 1);
	printf("ft_memchr = >%p<\n", lok);
	printf("ft_memchr = >%s<\n", lok);

	

	char cmp8[] = "  ";
	char cmp9[] = "\0\0";
	size_t cmp10 = 0;
	printf("ft_strnstr = >%s<\n", ft_strnstr(cmp8, cmp9, cmp10));

/*	int lvmns = 100;
	int *ptrlx = ft_calloc(lvmns, 1);
	int i = 0;
	while (i < lvmns)
	{
		printf("res = %i\n", ptrlx[i]);
		i++;
	}
	i = 0;
	while (i < lvmns)
	{
		ptrlx[i] = 223;
		i++;
	}
	i = 0;
	while (i < lvmns)
	{
		printf("res = %i\n", ptrlx[i]);
		i++;
	}*/
	char *substr;
	substr = "42";
	
	int start = 0;
	int len = 0;
	
	printf("s = >%s<, p = %p\n", ft_substr(substr, start, len), ft_substr(substr, start, len));
	substr = ft_substr(substr, start, len);
	//free(substr);
	
}