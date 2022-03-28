#include "main.h"

/**
 *print_chessboard - prints an 8x8 chessboard
 *@a: 2d char array representing board
 *
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
putchar((*(a + i))[j]);
}
putchar('\n');
_putchar('\n');
}
