#include <stdio.h>

int main(int argc, char *argv[])
{
	// create two arrays we care about
	int ages[] = {23, 43, 12, 90, 2};

	char *names[] = {
		"Alan", "Frank", 
		"Mary", "John", "Lisa"
	};

	// safely get the size of ages
	int count = sizeof(ages) / sizeof(int);
	int i = 0;

	//first way using indexing
	for (i = 0; i < count; i++)
	{
		printf("%s has %d years alive.\n",
			    names[i], ages[i] );
	}

	printf("---\n");

	// setup the pointers to the start of the arrays
	int *cur_ages = ages;
	char **cur_names = names; 

	// second way, pointers are just arrays
	for (i = 0; i < count; i++)
	{
		printf("%s is %d years old\n",
		        cur_names[i], cur_ages[i] );
	}

	printf("---\n");

	// third way using pointers increment
	for (i = 0; i < count; i++)
	{
		printf("%s is %d years old\n",
		        *(cur_names+i), *(cur_ages+i) );
	}

	printf("---\n");

	// fourth way with pointers in a stupid complex way
	for (cur_names = names, cur_ages = ages; 
		     (cur_ages - ages) < count;
		     cur_names++, cur_ages++)
	{
		printf("%s is %d years old\n",
		        *cur_names, *cur_ages );
	}

	return 0;
}