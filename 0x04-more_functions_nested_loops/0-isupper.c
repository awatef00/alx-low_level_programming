#include "main.c" 

/**
 * _isupper - check if a letter is upper
 * @x: The number to be ckecked
 * Return: 1 for upeer letter or 0 for any else 
 */

int _isupper(int x)

{

        if (x >= 65 && x <= 90)
	{
	return (1);
        }
        return (0);
}
