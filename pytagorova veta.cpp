#include<stdio.h>
#include<math.h>
int main ()
{
		float a, b, c;
		printf("Enter side a: ");
		scanf("%f", &a);
		printf("Enter side b: ");
		scanf("%f", &b);
		printf("Enter side c: ");
		scanf("%f", &c);
			if (a>b && a>c)
			{
				if (pow(b, 2) + pow(c, 2) == pow(a, 2))
				{
					printf("Triangle is rectangular");
				}
				else
				{
					printf("Isn't rectangular");
				}
			}
			if (b>a && b>c)
			{
				if (pow(a, 2) + pow(c, 2) == pow(b, 2))
				{
					printf("Triangle is rectangular");
				}
				else
				{
					printf("Isn't rectangular");
				}
			}
			if (c>a && c>b)
			{
				if (pow(a, 2) + pow(b, 2) == pow(c, 2))
				{
					printf("Triangle is rectangular");
				}
				else
				{
					printf("Isn't rectangular");
				}
			}
			if (a==b && a==c && b==c)
			{
				printf("Isn't rectangular");
			}
		}
