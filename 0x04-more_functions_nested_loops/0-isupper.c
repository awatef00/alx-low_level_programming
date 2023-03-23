#include "main.h"
/**
 * _isupper - check if a letter isupper
 * @x: The number to be ckecked
 * Return: 1 for upeer letter or 0 for any else
 */
int _isupper(int x)
{
if(x >= 'A' && x <= 'Z')
{
return(1);
}
return(0);
}
