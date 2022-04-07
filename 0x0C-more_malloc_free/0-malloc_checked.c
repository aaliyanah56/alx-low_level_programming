#include<stdio.h>
/**
* *malloc_checked -points to allocated memory
* @b: number of bytes to be allocated
* Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
    
ptr = malloc(b);

if(ptr == NULL)

exit(98);

return (ptr);
}
