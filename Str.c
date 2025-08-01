#include <stdio.h>
#include <string.h>
int str(int argc, char *argv) {
	char *len = argv[1];

	int lengthString = sizeof(len) / sizeof(len[0]);

	printf("THe length of the String is : %d ",lengthString);
	return 0;
}

