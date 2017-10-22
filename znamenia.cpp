#include <stdio.h>
int main ()
{
		int day, month;
		printf("Enter day: ");
		scanf("%d", &day);
		printf("Enter month: ");
		scanf("%d", &month);
		if ((day >= 1 && day <= 31) && (month >= 1 && month <= 12))
		{
			if ((day >= 21 && day <= 31 && month == 1) || (day >= 1 && day <= 19 && month == 2))
			{
				printf("Water Carrier\n");
			}
			if ((day >= 20 && day <= 28 && month == 2) || (day >= 1 && day <= 20 && month == 3))
			{
				printf("Fish\n");
			}
			if ((day >= 21 && day <= 31 && month == 3) || (day >= 1 && day <= 20 && month == 4))
			{
				printf("Ram\n");
			}
			if ((day >= 21 && day <= 30 && month == 4) || (day >= 1 && day <= 20 && month == 5))
			{
				printf("Bull\n");
			}
			if ((day >= 21 && day <= 31 && month == 5) || (day >= 1 && day <= 20 && month == 6))
			{
				printf("Twins\n");
			}
			if ((day >= 21 && day <= 30 && month == 6) || (day >= 1 && day <= 22 && month == 7))
			{
				printf("Crab\n");
			}
			if ((day >= 23 && day <= 31 && month == 7) || (day >= 1 && day <= 22 && month == 8))
			{
				printf("Lion\n");
			}
			if ((day >= 23 && day <= 31 && month == 8) || (day >= 1 && day <= 22 && month == 9))
			{
				printf("Virgin\n");
			}
			if ((day >= 23 && day <= 30 && month == 9) || (day >= 1 && day <= 22 && month == 10))
			{
				printf("Scales\n");
			}
			if ((day >= 23 && day <= 31 && month == 10) || (day >= 1 && day <= 22 && month == 11))
			{
				printf("Scorpion\n");
			}
			if ((day >= 23 && day <= 30 && month == 11) || (day >= 1 && day <= 21 && month == 12))
			{
				printf("Archer\n");
			}
			if ((day >= 22 && day <= 31 && month == 12) || (day >= 1 && day <= 20 && month == 1))
			{
				printf("Sea-Goat\n");
			}
		}
		else
		{
			printf("\nOut of range\n");
		}
	}
