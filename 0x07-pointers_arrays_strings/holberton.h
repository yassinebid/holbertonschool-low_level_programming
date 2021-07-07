#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x06-pointers_arrays_strings directory.
 */

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_diagsums(int *a, int size);
char *_strcpy(char *dest, char *src);
void print_chessboard(char (*a)[8]);
int _putchar(char c);

#endif  