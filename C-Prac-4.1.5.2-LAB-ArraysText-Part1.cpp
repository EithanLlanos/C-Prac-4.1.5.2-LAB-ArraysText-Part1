//Scenario
//Write a program that asks the user to provide four names, and prints them in reverse order.For now, assume that each name consists of a maximum of 20 letters.
//Because you probably don't yet know about multidimensional arrays, use four variables. Later you should store data of this kind in a 2D array (or a more advanced data type).
//Your version of the program must print the same result as the expected output.
//
////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Sample input
//Emma
//Olivia
//Noah
//Liam
//
//Expected output
//Liam
//Noah
//Olivia
//Emma
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main(void) {
	char n1[20], n2[20], n3[20], n4[20];

	//This code doesnt work
	//printf("Please enter the name number 1:\n");
	//scanf_s("%c", &n1);
	//printf("Please enter the name number 2:\n");
	//scanf_s("%c", &n2);
	//printf("Please enter the name number 3:\n");
	//scanf_s("%c", &n3);
	//printf("Please enter the name number 4:\n");
	//scanf_s("%c", &n4);

	printf("Please enter the name number 1:\n");
	scanf_s("%19s", n1, sizeof(n1));
	printf("Please enter the name number 2:\n");
	scanf_s("%19s", n2, sizeof(n2));
	printf("Please enter the name number 3:\n");
	scanf_s("%19s", n3, sizeof(n3));
	printf("Please enter the name number 4:\n");
	scanf_s("%19s", n4, sizeof(n4));
	printf("%s\n%s\n\%s\n%s", n4, n3, n2, n1);
	
	return 0;
}