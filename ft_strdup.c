#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s1) {
  char *result;
  size_t len;

  len = ft_strlen(s1);
  result = (char *)malloc(sizeof(char) * (len + 1));
  if (!result)
    return (NULL);
  result[len] = '\0';
  while (len >= 0) {
    result[len] = s1[len];
    len--;
  }
  return (result);
}
