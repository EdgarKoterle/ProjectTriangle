#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
	srand(time(NULL));
	char seria[3];
	char cislo[4];
	int i;
	for (i=0; i<3; i++)
	{
		char hodnota=rand()%10+48;
		cislo[i]=hodnota;
	}
	cislo[4]='\0';
	
	for (i=0; i<2; i++)
	{
		char letter=rand()%26+65;
		seria[i]=letter;
	}
	seria[3]='\0';
	
	printf ("KE%s%s", cislo, seria);
}
