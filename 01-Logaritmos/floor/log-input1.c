

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// A função lg recebe um inteiro N > 0 
// e devolve o piso de log N, ou seja,
// o único inteiro i tal que
// 2^i <= N < 2^(i+1).

int lg (int N) {  
   double x;
   x = log10 (N) / log10 (2);
   return floor (x); 
}

int main (int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Wrong number of arguments\n");
		printf("Usage: ./log-input 'number of lines read'\n");
		return 1;
	}
	int n = atoi (argv[1]);
	FILE *file = fopen ("powersOfTwo.txt", "r");
	if (file == NULL)
	{
		printf("No file opened");
		return 1;
	}
	char number[1000];
	for (int i = 0; i < n; i++)
	{
		fscanf(file, "%s", number);	
		int num = atoi (number);
		printf("%i\n", lg (num));
	}
	fclose (file);
}
