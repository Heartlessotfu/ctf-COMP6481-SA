#include<stdio.h>
#include <stdlib.h>

struct burger {
    void (*info_ptr)(void);
    int lettuce;
    int cheese;
    int pickles;
    int meat;
};

struct drink {
    int size;
    int colour;
    int version;
    int flavour;
    int ice;
};

typedef struct burger * Burger;
typedef struct drink * Drink;

void * array[20] = {0};
int selected = -1;
int burgers[20] = {0};
int drinks[20] = {0};

void printIngredients(void) {
    Burger burg = (Burger)array[selected];
    printf("This burger has the following ingredients:\n");
    if (burg->lettuce > 0) printf(" - lettuce\n");
    if (burg->pickles > 0) printf(" - pickles\n");
    if (burg->cheese > 0) printf(" - cheese\n");
    if (burg->meat > 0) printf(" - meat\n");
};

void createBurger(void) {
    int input = 0;
    int i = 0;
    for (; i < 20; i++) {
        if (array[i] == NULL) break;
    }
    printf("Burger id: %d\n", i);
    Burger burg = malloc(sizeof(struct burger));
    burg->info_ptr = printIngredients;
    printf("Answer the following questions\nInput 1 for yes and 0 for no\n");
    printf("Does this burger have lettuce?: ");
    scanf("%d", &input);
    burg->lettuce = input;
    printf("Does this burger have cheese?: ");
    scanf("%d", &input);
    burg->cheese = input;
    printf("Does this burger have pickles?: ");
    scanf("%d", &input);
    burg->pickles = input;
    printf("Does this burger have meat?: ");
    scanf("%d", &input);
    burg->meat = input;
    printf("Congrats your burger is now in the system\n");
    printf("You can selected this burger using id: %d\n", i);
    array[i] = (void *)burg;
    burgers[i] = 1;
};


void createDrink(void) {
    int input = 0;
    int i = 0;
    for (; i < 20; i++) {
        if (array[i] == NULL) break;
    }
    printf("Drink id: %d\n", i);
    Drink dri = malloc(sizeof(struct drink));
    printf("Answer the following questions\n");
    printf("What is the volume of this drink? (answer in ml): ");
    scanf("%d", &input);
    dri->size = input;
    printf("Is this drink blue in colour?(input 1 for yes and 0 for no): ");
    scanf("%d", &input);
    dri->colour = input;
    printf("Does this drink have a grape flavour?(input 1 for yes and 0 for no): ");
    scanf("%d", &input);
    dri->flavour = input;
    printf("Is this drink cola?(input 1 for yes and 0 for no): ");
    scanf("%d", &input);
    dri->version = input;
    printf("Does this drink have ice in it?(input 1 for yes and 0 for no): ");
    scanf("%d", &input);
    dri->ice = input;
    printf("Congrats your drink is now in the system\n");
    printf("You can selected this drink using id: %d\n", i);
    array[i] = (void *)dri;
    drinks[i] = 1;
};

void removeBurger(void) {
    int input = 0;
    printf("Input the id of the burger you wish to remove: ");
    scanf("%d", &input);
    if (input < 0 || burgers[input] == -1) {
        printf("Invalid id for burger\n");
        return;
    }
    burgers[input] = -1;
    free(array[input]);
};

void removeDrink(void) {
    int input = 0;
    printf("Input the id of the drink you wish to remove: ");
    scanf("%d", &input);
    if (input < 0 || drinks[input] == -1) {
        printf("Invalid id for drink\n");
        return;
    }
    drinks[input] = -1;
    free(array[input]);
};

void displayInfo(void) {
    if (selected < 0) {
        printf("Please select a burger first\n");
    } else if (array[selected] == NULL) {
        printf("There is no burger for this id\n");
    } else if (((Burger)(array[selected]))->info_ptr < 0x08000000) {
        printf("What you selected was not a burger\n");
    } else {
        ((Burger)(array[selected]))->info_ptr();
    }
};


void selectItem(void) {
    printf("Input the id of the item you want to select: ");
    scanf("%d", &selected);
};

void decode(char buffer[29], char key[29], char text[29]) {
	for (int i = 0; i < 28; i++) {
		buffer[i] = key[i] ^ text[i];
	}
}

void print_flag(void) {
    char buff[29] = {0};
    decode(buff, "\x19\x1e\x7\x5a\x10\xa\x6d\xe\x43\x57\x5\x37\x11\x13\xb\x2e\x8\x8\x52\x52\x55\x37\x9\x5f\x1d\x55\x49\x14", "ir4nc92js94hd78qnzaa1hdlpe;m");
    printf("FLAG{%s}\n", buff);
}

int main (void) {
    for (int j = 0; j < 20; j++) {
	array[j] = NULL;
	burgers[j] = -1;
	drinks[j] = -1;
    }
    printf("Welcome to SecDonald's meal manager\n");
    printf("Here you can create new burgers and drinks for our menu\n");
        int cont = 1;
    while (cont) {
        printf("Input the number corresponding to the action you want to make:\n");
        printf("1: Create a burger\n");
        printf("2: Remove a burger\n");
        printf("3: Create a drink\n");
        printf("4: Remove a drink\n");
        printf("5: Select an item\n");
        printf("6: Display burger info\n");
        printf("0: quit\n");
        printf("Select Option: ");
        int option = 0;
        scanf("%d", &option);
        switch (option) {
            case 0:
                cont = 0;
                break;
            case 1:
                createBurger();
                break;
            case 2:
                removeBurger();
                break;
            case 3:
                createDrink();
                break;
            case 4:
                removeDrink();
                break;
            case 5:
                selectItem();
                break;
            case 6:
                displayInfo();
                break;
            default:
                printf("Invalid number entered\n");
                break;
        }
    }
    return 0;
}
