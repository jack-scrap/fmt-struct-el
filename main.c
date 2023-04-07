#include <stdio.h>

const char ws = ' ';

const char prefix = '-';

void err(char* msg) {
	printf("Error: %s\n", msg);
}

int main(int argc, char* argv[]) {
	if (argc == 1) {
		err("No arguments");

		return 1;
	}

	if (argc != 1 + 1) {
		err("Wrong number of arguments");

		return 1;
	}

	char* str = argv[1];

	printf("%c%c%s\n", prefix, ws, str);

	return 0;
}
