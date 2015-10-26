#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("ERROR: You need at least one argument. \n");

		return 1;
	}

	int i = 0;
	for (i = 0; argv[1][i] != '\0'; i++)
	{
		char letter = argv[1][i];

		switch (letter):
		{
			case 'a':
			case 'A':
				printf("%d: 'a' or A'\n", i );
				break;
			case 'e':
			case 'E':
				printf("%d: 'b' or 'B'\n", i);
				break;
			case 'i':
			case 'I':
				printf("%d: 'i' or 'I'\n", i);
				break;
			case 'o':
			case 'O':
				printf("%d: 'o' or 'O'\n", i);
				break;
			case 'u':
			case 'U':
				printf("%d: 'u' or 'U'\n", i);
				break;
			case 'y':
			case 'Y':
				printf("%d: 'y' or 'Y'\n", );
				break;

			default:
				printf("%d: %c is not a vowel\n", i, letter );

		}
	}

	return 0;
}