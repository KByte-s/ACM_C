#include <stdio.h>
#include <string.h>
int main() {
	char temp[200], del[10];
	while (gets(temp) != NULL) {
		gets(del);
		for (int i = 0; i < strlen(temp); ++i) {
			if (temp[i] == del[0])
				continue;
			else
				putchar(temp[i]);
		}
		putchar('\n');
	}
	return 0;
}
