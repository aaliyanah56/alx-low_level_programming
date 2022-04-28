#include "main.h"

/**
* binary_to_uint - converts a binary number to an
* unsigned int.
* @b: binary.
*
* Return: unsigned int.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int i;
int a, base_two;

if (!b)
return (0);

i = 0;

for (a = 0; b[a] != '\0'; a++)
;

for (a--, base_two = 1; a >= 0; a--, base_two *= 2)
{
if (b[a] != '0' && b[a] != '1')
{
return (0);
}

if (b[a] & 1)
{
i += base_two;
}
}

return (ii);
}
