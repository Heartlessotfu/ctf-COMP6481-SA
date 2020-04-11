#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char password[10];
void print_flag() {
	char buffer[25] = {0};
	buffer[0] = 'u';
	buffer[9] = 'f';
	buffer[20] = '_';
	buffer[10] = '_';
	buffer[1] = '$';
	buffer[8] = 't';
	buffer[2] = '3';
	buffer[3] = '_';
	buffer[21] = 'w';
	buffer[22] = '4';
	buffer[23] = 'y';
	buffer[5] = 'r';
	buffer[11] = 't';
	buffer[12] = 'h';
	buffer[6] = '1';
	buffer[4] = 'p';
	buffer[15] = 'r';
	buffer[24] = '\0';
	buffer[7] = 'n';
	buffer[13] = '3';
	buffer[16] = '1';
	buffer[17] = 'g';
	buffer[18] = 'h';
	buffer[19] = '1';
	buffer[14] = '_';
	printf("FLAG{%s}\n", buffer);
}

int main () {
    password[0] = 'p';
    password[1] = 'i';
    password[2] = 'k';
    password[3] = 'a';
    password[4] = 'c';
    password[5] = 'h';
    password[6] = 'u';
    password[7] = ' ';
    password[8] = 'O';
    password[9] = ':';
    password[10] = '\0';
    char buff[200] = {0};
    printf("Enter your name: ");
    fgets(buff, 50, stdin);
    printf("Hi ");
    printf(buff);
    char answer[20] = {0};
    fgets(answer, 19, stdin);
    answer[10] = '\0';
    if (strcmp(answer, password) == 0) {
        print_flag();    
    } else {
    	printf("Permission Denied\n");
    }
    return 0;
}
