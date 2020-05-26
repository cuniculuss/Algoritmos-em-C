
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// A função lg recebe um inteiro N > 0 
// e devolve o piso de log N, ou seja,
// o único inteiro i tal que
// 2^i <= N < 2^(i+1).

long long power (int p)
{  
   long n = 1;
   int i = 0;
   while (i < p) {
      n *= 2;
	  i += 1;
   }
   return n;    
}

int main ()
{
	FILE *file = fopen ("powersOfTwo.txt", "w");
	long long p;
	int i = 0;
	while (1)
	{
	   p = power (i);
	   if (p < 0)
	      break;
	   /*
	   switch (i)
	   {
		   case 31: fprintf (file, "int overflow\n"); break;
		   case 63: fprintf (file, "long overflow\n"); break;
	   }
	   */
	   fprintf(file, "%lli\n", power (i));
	   i++;
	}
	fclose(file);
}
