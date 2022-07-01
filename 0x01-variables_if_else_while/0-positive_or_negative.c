#include <stdlib.h>
#include <time.h>
/**
 * main - will assign a random number to the
 * Return: 0 if exited properly
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
return (0);
}
