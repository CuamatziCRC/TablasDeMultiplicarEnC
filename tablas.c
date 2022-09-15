
#include <stdio.h>

//Tablas de multiplicar en C
int main(void)
{
	
	int i,y;
	 for ( i = 1; i < 10; ++i)
	 {
	 	printf(" Tabla de multiplicar de %d\n",i );
	 	for ( y = 1; y < 10; ++y)
	 	{
	 		printf(" %d X %d  = %d\n",i,y,i*y);
	 	}

	  }
	return 0;
}