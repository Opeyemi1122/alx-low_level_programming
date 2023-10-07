#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*comment space
 *this program is to check if n is negative or positive
 */
int main (void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX;
	
	printf("n is: %i", n);

	if(n > 0)
	{
	printf("%i is positive\n", n);
	}
	else if(n < 0)
	{
	printf("%i is negative\n", n);
	}
	else
	{
	printf("%i is zero\n", n);
	}

	return (0);
}
