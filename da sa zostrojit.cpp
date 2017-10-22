#include<stdio.h>
int main ()
{
	float a, b, c;
		printf("Enter side a: ");
		scanf("%f", &a);
		printf("Enter side b: ");
		scanf("%f", &b);
		printf("Enter side c: ");
		scanf("%f", &c);
		if ((a+b>c && c>a-b))
		{
			printf ("Triangle can be built");
		}
		else 
		{
			printf ("Triangle can't be built");
		}
}
