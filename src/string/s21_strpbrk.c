#include "../s21_string.h"
// Находит первый символ в строке str1, который соответствует любому символу,
// указанному в str2.
char *s21_strpbrk(const char *str1, const char *str2) {
  char *ptr = (char *)str1;
  while (ptr) {
    if (s21_strchr(str2, *ptr)) {
      break;
    }
    ptr++;
  }
  if (*str1 == '\0') {
    ptr = S21_NULL;
  }
  return ptr;
}
