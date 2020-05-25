
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// A função lg recebe um inteiro N > 0 
// e devolve o piso de log N, ou seja,
// o único inteiro i tal que
// 2^i <= N < 2^(i+1).

long power (int p)
{  
   long n = 1;
   int i = 0;
   while (i < p) {
      n *= 2;
	  i += 1;
   }
   return n;    
}

int main (int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: ./powerOfTwo 'power'\n");
		return 1;
	}
	int x = atoi (argv[1]);
	printf("%li\n", power (x));
}
