#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decrypt (char buffer[200], char key[37], char *string) {
    int length = strlen(string);
    for (int i = 0; i < length; i++) {
        char a = string[i];
        int index = 0;
        while (key[index] != a && index < 37){
            index++;
        }
        if (index < 26) {
            buffer[i] = index + 'a';
        } else if (string[i] == '_') {
            buffer[i] = '_';
        } else {
            buffer[i] = (index-26) + '0';
        }
    }
}

int grab_input(void) {
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int counter = 0;
    printf("Enter the code number: ");
    while (counter < 5) {
	if (counter == 0) scanf("%d", &one);
	else if (counter == 1) scanf("%d", &two);
	else if (counter == 2) scanf("%d", &three);
	else if (counter == 3) scanf("%d", &four);
	else scanf("%d", &five);
    	counter++;
    }
    if (one != 4) return 0;
    else if (two != 20) return 0;
    else if (three != 42) return 0;
    else if (four != 2) return 0;
    else if (five != 0) return 0;
    else return 1;
}




int main () {
    int result = grab_input();
    if (result == 1) {
        char key[37] = {0};
        char buffer[200] = {0};
        char flag[17] = {0};
        char *k = "aaaaaaadcrfvtgbyaaaaaikolp0000004756";
        // "qazwsxedcrfvtgbyhnujmikolp1029384756"
        // "aaaaaaadcrfvtgbyaaaaaikolp0000004756";
        strcpy(key, k);
        key[0] = 'q';
        key[2] = 'z';
        key[3] = 'w';
        key[4] = 's';
        key[5] = 'x';
        key[6] = 'e';
        key[16] = 'h';
        key[17] = 'n';
        key[18] = 'u';
        key[19] = 'j';
        key[20] = 'm';
        key[26] = '1';
        key[28] = '2';
        key[29] = '9';
        key[30] = '3';
        key[31] = '8';
        strcpy(flag, "w0uu3u9ta09_t30g");
        decrypt(buffer, key, flag);
        printf("FLAG{%s}\n", buffer);
    }
    else printf("Permission Denied\n");


    return 0;
}
