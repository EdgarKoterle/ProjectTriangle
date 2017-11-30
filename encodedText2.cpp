#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main ()
{
	FILE *fr, *fr1, *fw;
	fr=fopen ("codeTable.txt","r");
	
	if (fr==NULL)
	{
		printf ("Code table read error");
		return 1;
	}
	
	char key[80], z=0, x=0, y=0;
	int i=0, j=0;

	while ((z = fgetc(fr)) != EOF) 
	{
    	if (isalpha(z) || isdigit(z)) 
		{
     		key[i]=z;
     		i++;
   		}
 	}
 	
 	fclose(fr);
	
	fr1=fopen ("secretCode.txt","r");
	fw=fopen ("decodedText.txt","w");
	
	if (fr1==NULL)
	{
		printf ("Secret code read error");
		return 1;
	}
	
	if (fw==NULL)
	{
		printf ("Write file error");
		return 1;
	}
	
	while ((x=fgetc(fr1)) != EOF)
	{
		if (isalnum(toupper(x)))
		{
		
			for (j=1; j<i; j+=2)
			{
				if (toupper(x)==key[j])
				{
					x=key[j-1];
					break;
				}
			}	
		}
		
		fputc (x,fw);
	}
	
	printf ("File was succesfully decrypted and saved as \"decodedText.txt\" in your sourcecode destination folder.");
	
	fclose (fr1);
	fclose (fw);
	
return 0;
}
