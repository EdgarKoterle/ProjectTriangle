#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main ()
{
srand (time(NULL)); // premiesanie cisel
 int arr [N];
 
 int i;
 for (i=0; i<N; i++)	// generovanie cisel
 {
      arr[i]=rand()%9990+10;
 }
 
 
 //vypis cisel
 
 for (i=0; i<N; i++)
 {
   printf("%d ", arr[i]);
 }
 
 
 //pocet parnych a neparnych cisel
 
 int evenCount=0;
 for (i=0; i<N; i++)	
 {
 	if (arr[i]%2==0)
 	{
 		evenCount++;
	}
 }
 printf ("\n\nEven: %d\nOdd: %d", evenCount, N-evenCount);
 
 
 //dvojciferne
 
 int twoDigit=0;
 for (i=0; i<N; i++)
 {
 	if (arr[i]>9 && arr[i]<100)
 	{
 		twoDigit++;
	}
 }
 printf ("\n\n2-digit numbers: %d", twoDigit);
 
 
  //trojciferne
 
 int threeDigit=0;
 for (i=0; i<N; i++)
 {
 	if (arr[i]>99 && arr[i]<1000)
 	{
 		threeDigit++;
	}
 }
 printf ("\n\n3-digit numbers: %d", threeDigit);
 
 
  //stvorciferne
 
 int fourDigit=0;
 for (i=0; i<N; i++)
 {
 	if (arr[i]>999 && arr[i]<10000)
 	{
 		fourDigit++;
	}
 }
 printf ("\n\n4-digit numbers: %d", fourDigit);
 
 
 //najmensie cislo
 
 int min=arr[0];
 for (i=1; i<N; i++)
 {
 	if (min>arr[i])
 	{
		min=arr[i]; 
	}
 }
 printf ("\n\nMin: %d", min);
 
 
 //najvacsie cislo
 
 int max=arr[0];
 for (i=1; i<N; i++)
 {
 	if (max<arr[i])
 	{
		max=arr[i]; 
	}
 }
 printf ("\nMax: %d", max);
 
 
 //pole od konca
 
 printf ("\n\nArray from the end: ");
 for (i=N-1; i>=0; i--)
 {
 	printf ("%d ", arr[i]);
 }
 
 
 //palindrom
 
 int pal2=0;
 for (i=0; i<N; i++)
 {
 	if (arr[i]>9 && arr[i]<100)
 	{
 		pal2++;
 		int a=arr[i]%10;
		int b=arr[i]/100;
		 if (a==b)
		{
			printf("%d", pal2);
		}
	}
 }

 
 //delitelne 7
 
 int seven=0;
  for (i=1; i<N; i++)
 {
 	if (arr[i]%7==0)
 	{
		seven++; 
	}
 }
 printf ("\n\nDivisible by 7: %d", seven);
}
