// Created by ShadyE
// Copyright (c) StanLab 2016
// Temperature Converter C Programme

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>




// Centigrade to Farenhite Converter Function
centigrade_to_farentite()
{
	float c;
	printf("\nPlease enter temperature in Centigrade scale :: ");
	scanf_s("%f", &c);
	float f = ((c * 9) / 5) + 32;
	printf("\n\t\t\t\t\t%f degree Centigrade = %f degree Farenhite", c, f);
	double K = c + 273.16;
	printf("\n\t\t\t\t\t***Temperature in Kelvine Scale is :: %f K", K);
}




// Farenhite to Centigrade Converter Function
farenhite_to_centigrade()
{
	float f;
	printf("\nPlease enter the temperature in Farenhite scale :: ");
	scanf_s("%f", &f);
	float c = 5 * (f - 32) / 9;
	printf("\n\t\t\t\t\t%f degree Farenhite = %f degree Centigrade", f, c);
	double K = c + 273.16;
	printf("\n\t\t\t\t\t***Temperature in Kelvine Scale is :: %f K", K);
}




// Choicing Function
converter_choice()
{
start:
	printf_s("If you want to convert   Centigrade to Farenhite,  enter 1\n");
	printf_s("                                    Or,\n");
	printf_s("If you want to convert   Farenhite to Centigrade,  enter 2\n");
	printf_s("                                                           Your Choice :: ");
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
void main()
{
	printf("\t\t\t  ____________________________________\n");
	printf("\t\t\t |Temperature Converter (Beta v3.17.2)|\n");
	printf("\t\t\t |---------created by ShadyE----------|\n");
	printf("\t\t\t |---------(c) StanLab 2016-----------|\n");
	printf("\t\t\t |____________________________________|\n\n\n\n");

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