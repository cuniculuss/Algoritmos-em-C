// Critique a seguinte versão da função lg.  Ela usa as funções log10 e floor da biblioteca math:
//
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int lg (int N) {  
   double x;
   x = log10 (N) / log10 (2);
   return floor (x); 
}


int main (int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: ./ln 'number'\n");
		return 1;
	}
	int num = atoi( argv[1]);
	printf("%i\n", lg(num));
}
