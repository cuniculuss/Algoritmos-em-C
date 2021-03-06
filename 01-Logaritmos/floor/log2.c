
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// A função lg recebe um inteiro N > 0 
// e devolve o piso de log N, ou seja,
// o único inteiro i tal que
// 2^i <= N < 2^(i+1).

int lg (int N) {  
   int i = 0, n = 1;
   while (n <= N) {
      n = 2 * n;
      i += 1; 
   }
   return i-1; 
}

int main (int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: ./log2 number\n");
		return 1;
	}
	int x = atoi (argv[1]);
	printf("%i\n", lg (x));
}
