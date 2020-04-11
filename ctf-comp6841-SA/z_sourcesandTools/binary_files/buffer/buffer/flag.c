#include <stdlib.h>
#include <stdio.h>

void getflags() {
    setbuf(stdout, NULL);
    unsigned int secret = (unsigned int)0;
    char password[20];
    printf("password: ");
    gets(&password);
    printf("%s\n", password);
    printf("The secret number is %d\n", secret);
    if (secret == 29537) {
        printf("Congrats on getting in :)\nHere is your flag: ");
        printf("FLAG{REDACTED}\n");
    } else {
        printf("permission denied\n");
    }
}


int main () {
    getflags();
    return 0;
}

