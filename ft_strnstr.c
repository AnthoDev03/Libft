#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	if (len == 0) {
		return (char *) big;
	}
	size_t little_len;

	little_len = ft_strlen(little);
	if (little_len == 0) {
		return (char *) big;
	}
	while (*big && len >= little_len) {
		char *p1; 
		char *p2;

		p1 = (char *) big;
		p2 = (char *) little;

		size_t remaining_len; 

		remaining_len = len;
		while (*p1 && *p2 && (*p1 == *p2) && remaining_len > 0) {
			p1++;
			p2++;
			remaining_len--;
		}
		if (*p2 == '\0') {
			return (char *) big;
		}
		big++;
		len--;
	}
	return NULL;
}
