#include <stdio.h>

typedef struct
{
	int a;
	int b;
} rectangle;

int main ()
{
	rectangle nums[60];
	FILE *fr, *fw;
	fr=fopen ("sides.txt", "r");
	
	if (fr==NULL)
	{
		printf ("Read file error");
		return 1;
	}
	
	fw=fopen ("results.txt", "w");
	
	if (fw==NULL)
	{
		printf ("Write file error");
		fclose (fr);
		return 1;
	}
	
	int i=0;
	
	while (fscanf (fr,"%d%d",&nums[i].a,&nums[i].b)!=EOF)
	{
	    fprintf (fw, "a=%d b=%d o=%d S=%d\n", nums[i].a, nums[i].b, (nums[i].a)+(nums[i].b), nums[i].a*nums[i].b);
		i++;
	}
	
	printf ("Your file was succesfully saved as \"results.txt\"");
	
	fclose (fr);
	fclose (fw);
	
	return 0;
}
