// Temperature Converter C Programme

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


// Centigrade to Farenhite Converter Function
centigrade_to_farentite()
{
	int c;
	printf("Please enter temperature in Centigrade scale :: ");
	scanf_s("%d", &c);
	int f = ((c * 9) / 5) + 32;
	printf("\n\t\t\t\t\t%d degree Centigrade = %d degree Farenhite", c, f);
	int K = c + 273.16;
	printf("\n\t\t\t\t\t***Temperature in Kelvine Scale is :: %d K", K);
}


// Farenhite to Centigrade Converter Function
farenhite_to_centigrade()
{
	int f;
	printf("Please enter the temperature in Farenhite scale :: ");
	scanf_s("%d", &f);
	int c = 5 * (f - 32) / 9;
	printf("\n\t\t\t\t\t%d degree Farenhite = %d degree Centigrade", f, c);
	int K = c + 273.16;
	printf("\n\t\t\t\t\t***Temperature in Kelvine Scale is :: %d K", K);
}


// Choicing Function
converter_choice()
{
start:
	printf("If you want to convert Centigrade to Farenhite, Press 1	And then press Enter\n\t\t\tOr,\nIf you want to convert Farenhite to Centigrade, Press 2	And then press Enter\n\n\t\t\t\t\t\t\tYour Choice :: ");
	int choice;
	scanf_s("%d", &choice);
	if (choice == 1)
	{
		centigrade_to_farentite();
	}
	else if (choice == 2)
	{
		farenhite_to_centigrade();
	}
	else if (choice>2)
	{
		printf("\t\t\t\t\t\t\tInvalid Choice!!! Try Again,\n\n");
		goto start;
	}
	else if (choice<0)
	{
		printf("\t\t\t\t\t\t\tInvalid Choice!!! Try Again,\n\n");
		goto start;
	}
	else if (choice == 0)
	{
		exit(1);
	}
}



// Main Fuction
int main()
{
	printf("Temperature Converter C programme by ShadyE\n(c) Stan Lab 2016\n\n\n\n");
start:
	converter_choice();
	getchar();
	char choice;
	printf("\n\n\n\nIf you want to convert more, type A to do again and then press enter\n\t\tOr \nyou can type E and then press enter to exit :::: ");
	scanf_s("%c", &choice);
	switch (choice)
	{
	case 'A':
		printf("\n\n");
		goto start;
	case 'a':
		printf("\n\n");
		goto start;
	case 'E':
		exit(1);
	case 'e':
		exit(1);
	}
}