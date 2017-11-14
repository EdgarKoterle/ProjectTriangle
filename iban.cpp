#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main ()
{
	char accountNum[15];
	char bankNum[10];
	char iban[20];
	int errorBn=0;
	int errorAn=0;
	int i;
	
	printf ("Enter account number: ");
	do 
	{
		scanf ("%s", &accountNum);
		int anLen=strlen(accountNum);
	
		for (i=0; i<anLen; i++)
			if(accountNum[i]<0 && accountNum[i]>9)
				errorAn++;
			else errorAn=0;
			
		if (anLen!=10)
			errorAn++;
		else errorAn=0;
		
		if (errorAn!=0)
			printf("Invalid account number!\n\nTry again: ");
	}
	while (errorAn!=0);
	
	
	printf ("\n\nEnter bank number: ");
	do {
		scanf ("%s", &bankNum);
		int bnLen=strlen(bankNum);
	
		for (i=0; i<bnLen; i++)
			if (bankNum[i]<0 && bankNum[i]>9)
				errorBn++;
			else errorBn=0;

		if (bnLen!=4)
			errorBn++;
		else errorBn=0;
	
		if (errorBn!=0)
			printf ("Ivalid bank number!\n\nTry again: ");
	}
	while (errorBn!=0);
	

	for (i=0; i<10; i++)
	{
		if (i>3)
			iban[i]='0';
				
		else iban[i]=bankNum[i];
	}
	
	for (i=10; i<20; i++)
		iban[i]=accountNum[i-10];
	
	
	iban[20]='2';
	iban[21]='8';
	iban[22]='2';
	iban[23]='0';
	iban[24]='0';
	iban[25]='0';
	iban[26]='\0';
	
	
	int x=0;
	int y=0;
	for (i=0; i<26; i++)
  	{
  		x=0;
  		x=(iban[i]-48);
  		y=((y*10)+x)%97;	
	}
	
	int z=98-y;
	
	char z1=z/10;
	char z2=z%10;
	
	char iban2[30];
	iban2[0]='S';
	iban2[1]='K';
	iban2[2]=z1+48;
	iban2[3]=z2+48;
	
	for (i=4; i<8; i++)
		iban2[i]=bankNum[i-4];
	
	for (i=8; i<14; i++)
		iban2[i]='0';
	
	for (i=14; i<26; i++)
		iban2[i]=accountNum[i-14];
	
	printf ("\n\n\nIBAN: %s", iban2);
}


