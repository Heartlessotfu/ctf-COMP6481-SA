#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint = 0;

void get_flag (void) {
    srand(time(0));
    randint = 0;
    int six = 6;
    randint  = rand()%10000;
    char name[200] = {0};
    char plain[50] = {0};
    plain[0] = 'B';
    plain[1] = 'B';
    plain[2] = 'B';
    printf("%d %p\n", randint, &randint);
    printf("What's your name? ");
    fgets(name, 200, stdin);
    printf("\n");
    printf(name);
    printf("\n");
    int answer = 0;
    printf("Input the random number: ");
    scanf("%d", &answer);
    if (answer == randint) {
        printf("FLAG\n");
    } else {
        printf("Permission Denied\n");
    }
}

int main (int argc, char * argv[]) {
    get_flag(); 
    return 0;
}
