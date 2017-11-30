#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

typedef enum
{
	MALE, FEMALE, OTHER
}
gender;

typedef struct
{
	char city[20];
	int pc;
}
address_detail;

typedef struct
{
	gender sex;
	char name[20];
	int gender;
	int age;
	float salary;
	address_detail address;
}
person;

int main ()
{
   srand(time(NULL));

   person student[20];
   strcpy(student[0].name,"Sebastian"); student[0].age=35; student[0].salary=1452; student[0].sex=MALE;
   strcpy(student[0].address.city,"Kosice"); student[0].address.pc=92512; 
   strcpy(student[1].name,"David"); student[1].age=45; student[1].salary=1471; student[1].sex=MALE;
   strcpy(student[1].address.city,"Kosice"); student[1].address.pc=04001;
   strcpy(student[2].name,"Filip"); student[2].age=30; student[2].salary=987; student[2].sex=MALE;
   strcpy(student[2].address.city,"Bardejov"); student[2].address.pc=82356;
   strcpy(student[3].name,"Janka"); student[3].age=19; student[3].salary=1203; student[3].sex=FEMALE;
   strcpy(student[3].address.city,"Levoca"); student[3].address.pc=14780;
   strcpy(student[4].name,"Denisa"); student[4].age=35; student[4].salary=859; student[4].sex=FEMALE;
   strcpy(student[4].address.city,"Kosice"); student[4].address.pc=90845;
   strcpy(student[5].name,"Dominik"); student[5].age=28; student[5].salary=1452; student[5].sex=MALE;
   strcpy(student[5].address.city,"Kosice"); student[5].address.pc=84652;
   strcpy(student[6].name,"Jan"); student[6].age=31; student[6].salary=1020; student[6].sex=MALE;
   strcpy(student[6].address.city,"Senica"); student[6].address.pc=71254;
   strcpy(student[7].name,"Tobias"); student[7].age=32; student[7].salary=456; student[7].sex=MALE;
   strcpy(student[7].address.city,"Senec"); student[7].address.pc=12387;
   strcpy(student[8].name,"Tereza"); student[8].age=41; student[8].salary=785; student[8].sex=FEMALE;
   strcpy(student[8].address.city,"Poprad"); student[8].address.pc=12874;
   strcpy(student[9].name,"Slavka"); student[9].age=20; student[9].salary=1025; student[9].sex=FEMALE;
   strcpy(student[9].address.city,"Kosice"); student[9].address.pc=68787;
   strcpy(student[10].name,"Samuel"); student[10].age=24; student[10].salary=1332; student[10].sex=MALE;
   strcpy(student[10].address.city,"Kosice"); student[10].address.pc=87458;
   strcpy(student[11].name,"Xenia"); student[11].age=22; student[11].salary=800; student[11].sex=FEMALE;
   strcpy(student[11].address.city,"Presov"); student[11].address.pc=8001;
   strcpy(student[12].name,"Daniel"); student[12].age=44; student[12].salary=1701; student[12].sex=MALE;
   strcpy(student[12].address.city,"Michalovce"); student[12].address.pc=07101;
   strcpy(student[13].name,"Branislav"); student[13].age=25; student[13].salary=1101; student[13].sex=MALE;
   strcpy(student[13].address.city,"Martin"); student[13].address.pc=41444;
   strcpy(student[14].name,"Simona"); student[14].age=32; student[14].salary=1045; student[14].sex=FEMALE;
   strcpy(student[14].address.city,"Kosice"); student[14].address.pc=04022;
   strcpy(student[15].name,"Dusan"); student[15].age=18; student[15].salary=697; student[15].sex=MALE;
   strcpy(student[15].address.city,"Michalovce"); student[15].address.pc=55654;
   strcpy(student[16].name,"Kamil"); student[16].age=28; student[16].salary=1500; student[16].sex=MALE;
   strcpy(student[16].address.city,"Kosice"); student[16].address.pc=04011;
   strcpy(student[17].name,"Michaela"); student[17].age=27; student[17].salary=1300; student[17].sex=FEMALE;
   strcpy(student[17].address.city,"Senec"); student[17].address.pc=92545;
   strcpy(student[18].name,"Roman"); student[18].age=18; student[18].salary=1005; student[18].sex=MALE;
   strcpy(student[18].address.city,"Presov"); student[18].address.pc=04001;
   strcpy(student[19].name,"Oliver"); student[19].age=30; student[19].salary=1206; student[19].sex=MALE;
   strcpy(student[19].address.city,"Kosice"); student[19].address.pc=04012;

	// 1. 

	int i;
	for (i = 0; i<20; i++)
		printf ("\nName: %s, city: %s", student[i].name, student[i].address.city);

	// 2. 

	int maxSalaryMoney=student[0].salary;
	char maxSalaryStudent[20];
	for (i = 1; i<20; i++)
	{
		if (student[i].salary>maxSalaryMoney)
		{
			maxSalaryMoney=student[i].salary;
			strcpy(maxSalaryStudent, student[i].name);
		}
	}
	printf ("Max salary student:\n");
	printf ("Name: %s, salary", maxSalaryStudent, maxSalaryMoney);

	// 3.

	char cityKE[20], cityPO[20];
	strcpy (cityKE, "Kosice");
	strcpy (cityPO, "Presov");

	printf("Students from Kosice or Presov:\n");
	for (i = 0; i<20; i++)
		if (strcmp(student[i].address.city, cityKE) == 0 || strcmp(student[i].address.city, cityPO) == 0)
			printf("Name: %s\n", student[i].name);

	// 4. 

	printf("\nSalary between 1000 and 1300:\n");
	for (i = 0; i<20; i++)
		if (student[i].salary>=1000 && student[i].salary<=1300)
			printf ("Name: %s, salary: %.2f\n", student[i].name, student[i].salary);

	printf("\n");

	// 5.

	int sumAge=0;
	int students=0;
	for (i=0; i<20; i++)
	{
		sumAge=sumAge+student[i].age;
		students++;
	}
	
	float averageAge=(float)sumAge/(float)students;
	printf("Average age: %d\n\n", (int)averageAge);

	// 6. 

	printf("Average salary of student that are under 30 years old:\n\n");
	int sumSalary=0;
	int studentsUnder30=0;
	for (i = 0; i<20; i++)
	{
		if (student[i].age<30)
		{
			sumSalary = sumSalary + (int)student[i].salary;
			studentsUnder30++;
		}
	}
	float averageSalaryOfStudentsUnder30=(float)sumSalary/(float)studentsUnder30;
	printf("Average salary of students younger than 30: %.2f\n\n", averageSalaryOfStudentsUnder30);

	// 7. 

	printf("Students not from Kosice: ");
	int studentsNotFromKE=0;
	for (i = 0; i<20; i++)
		if (strcmp(student[i].address.city, cityKE) != 0)
			studentsNotFromKE++;
	printf ("%d", studentsNotFromKE);
	
	printf ("\n\n");
	
	// 8. 
	
	int oldestStudentAge=student[0].age;
	char oldestStudentName[20];
	printf("The oldest student is: ");
	for (i=1; i<20; i++)
	{
		if (student[i].age>oldestStudentAge)
		{
			oldestStudentAge=student[i].age;
			strcpy(oldestStudentName, student[i].name);
		}
	}
	printf("%s\n\n", oldestStudentName);

	// 9. 

	printf("Student with name longer than 7 characters:\n");
	for (i = 0; i<20; i++)
		if (strlen(student[i].name)>7)
			printf("%s\n", student[i].name);
	printf("\n");

	// 10.
	
	printf ("Sort by salary:\n");

	float temp; char tempName[20];
	for (i=0; i<19; i++)
	{
		int j;
		for (j=i+1; j<20; j++)
		{
			if (student[i].salary>student[j].salary)
			{
				person temp;
				temp=student[i];
				student[i]=student[j];
				student[j]=temp;
				strcpy(tempName, student[i].name);
				strcpy(student[i].name, student[j].name);
				strcpy(student[j].name, tempName);
			}
		}
	}

	for (i=1; i<20; i++)
		printf("Name: %s, salary: %f\n", student[i].name, student[i].salary);
		
	return 0;
}
