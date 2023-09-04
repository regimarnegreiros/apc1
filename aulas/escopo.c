#include <stdio.h>

int global = 10;

int main() {
	int local = 5;
	printf ("%i\n", local);
	
	{
		float local = 2.5f;
		printf ("%.2f\n", local);
	}
	
	printf ("%i", global);
	
	return 0;
}
