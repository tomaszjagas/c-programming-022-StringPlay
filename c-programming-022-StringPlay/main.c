#include <stdio.h>
#include <string.h>

int main() {
	char s[] = "My name is Tomek";
	char temp[50];

	char src[50], dest[50];

	strncpy(temp, s, sizeof(temp) - 1);
	printf("The length is: %d\n", strlen(s));
	printf("The temp is: %s\n", temp);
	printf("The lenght of temp is: %d\n", strlen(temp));

	strcpy(src, "This is source");
	strcpy(dest, "This is destination");
	strncat(dest, src, 15);
	printf("Final destination string is: |%s|\n", dest);

	printf("strcmp(\"A\", \"A\") is ");
	printf("%d\n", strcmp("A", "A"));
	printf("strcmp(\"A\", \"B\") is ");
	printf("%d\n", strcmp("A", "B"));
	printf("strcmp(\"B\", \"A\") is ");
	printf("%d\n", strcmp("B", "A"));
	printf("strcmp(\"C\", \"A\") is ");
	printf("%d\n", strcmp("C", "A"));
	printf("strcmp(\"Z\", \"a\") is ");
	printf("%d\n", strcmp("Z", "a"));
	printf("strcmp(\"apples\", \"apple\") is ");
	printf("%d\n", strcmp("apples", "apple"));

	return 0;
}