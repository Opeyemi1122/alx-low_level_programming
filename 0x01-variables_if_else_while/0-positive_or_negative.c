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
	n = rand() - RAND_MAX /2;
	
	printf("n is: %i\n", n);

	if(n > 0)
	printf("%i is positive\n", n);
	else if(n < 0)
	printf("%i is negative\n", n);
	else
	printf("0 is zero\n");

	return (0);
}
