#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char **ptr;
	char *asd;

	ptr = malloc(3 * sizeof(char *));
	ptr[0] = "test";
	printf("%s\n", ptr[0]);
	ptr[1] = "edorta garcia";
	printf("%s\n", ptr[1]);
	ptr[2] = "gar";
	printf("%s\n", ptr[2]);
}