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
    printf("decoded: %s\n", buffer);
    printf("ciphertext: %s\n", string);
}

void encrypt (char buffer[200], char key[37], char *string) {
    int length = strlen(string);
    for (int i = 0; i < length; i++) {
        char a = string[i];
        if (a >= '0' && a <= '9') {
            a = 26 + a - '0';
        } else {
            a = a - 'a';
        }
        if (string[i] == '_') {
            buffer[i] = '_';
        } else {
            buffer[i] = key[(int)a];
        }
    }
    printf("encoded to: %s\n", buffer);
    printf("plaintext: %s\n", string);
}

int main (void) {
    char buffer[200] = {0};
    char key[37] = {0};
    char oppositekey[37] = {0};
    char string[17] = {0};
    strcpy(key, "qazwsxedcrfvtgbyhnujmikolp1029384756");
    strcpy(oppositekey, "abcdefghijklmnopqrstuvwxyz0123456789");
    strcpy(string, "d1ss4s3mb13_m41n");
    encrypt(buffer, key, string);
    char newbuff[200] = {0};
    decrypt(newbuff, key, buffer);

    return 0;
}