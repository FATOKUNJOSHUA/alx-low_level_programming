#include "main.h"
#include <string.h>

/**
 * concatenate_strings - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting concatenated string.
 */

char *concatenate_strings(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int src_len = strlen(src);
	char *result = (dest_len + src_len + 1);

	memcpy(result, dest, dest_len);

	memcpy(result + dest_len, src, src_len + 1);
	return (result);
}
