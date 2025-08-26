#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char *len = argv[1];

	int lengthString = sizeof(len) / sizeof(len[0]);

	printf("THe length of the String is : %d\n ",lengthString);
	return 0;
}

