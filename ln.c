#include <math.h>
#include <stdio.h>

int lg (int N) {  
   double x;
   x = log10 (N) / log10 (2);
   return floor (x); 
}


int main (void)
{
	int b = lg (-49);
	printf("%i\n", b);
}
