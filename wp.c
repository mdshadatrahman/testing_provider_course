#include <stdio.h>
#include <string.h>
int main()
{
	// hello world in a frame problem
	char *str[] = {"Hello", "World", "in", "a", "frame"};
	int i, j, k, len = 0, maxlen = 0;

	int str_size = sizeof(str) / sizeof(str[0]);

	for (i = 0; i < str_size; i++)
	{
		len = strlen(str[i]);
		if (len > maxlen)
			maxlen = len;
	}
	for (i = 0; i < maxlen + 4; i++)
		printf("*");
	printf("\n");
	for (i = 0; i < str_size; i++)
	{
		len = strlen(str[i]);
		printf("* ");
		printf("%s", str[i]);
		for (j = 0; j < maxlen - len; j++)
			printf(" ");
		printf(" *\n");
	}
	for (i = 0; i < maxlen + 4; i++)
		printf("*");
	printf("\n");
	return 0;
}

// void printRectangleTakingListInput(char *str[])
// {

// }