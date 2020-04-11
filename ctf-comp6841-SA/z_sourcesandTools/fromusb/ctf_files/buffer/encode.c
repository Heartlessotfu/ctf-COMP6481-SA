#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decode(char buffer[25], char key[25], char text[25]) {
	for (int i = 0; i < 24; i++) {
		buffer[i] = key[i] ^ text[i];
	}
}

int main () {
	char buff[25] = {0};
	char key[25] = {0};
	char text[25] = {0};
	char newbuff[25] = {0};
	char bytes[25] = {0};

	sprintf(key, "1hd9;,cjshdighbcjkm30984");
	sprintf(text, "buff3r_0v3rfl0w_much_w0w");
	
	decode(buff, key, text);
	for (int i = 0; i < 24; i++) {
		printf("\\x%x", buff[i]);
	}
	printf("\n");
	decode(text, buff, key);
	printf("%s\n", text);
	return 0;
}
