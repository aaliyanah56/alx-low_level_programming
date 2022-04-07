#include <stdlib.h>
/**
* *malloc_checked - allocates memory using malloc and exit if failed
* @b: number of bytes allocated
* Return: pointer to the array initialized or NULL
*/

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}
