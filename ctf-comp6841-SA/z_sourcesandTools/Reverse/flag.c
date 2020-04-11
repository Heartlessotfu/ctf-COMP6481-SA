#include <stdio.h>
#include <stdlib.h>

typedef int uwu;
typedef char owo;

owo a[23] = {32, 36, 48, 49, 51, 52, 63, 65, 70, 71, 76, 95, 98, 99, 102, 103, 104, 114, 115, 116, 117, 123, 125};

uwu main()
{
    owo g[33] = {0};
    for (uwu i = 0; i < 33; i += 2) {
        switch(i) {
            case 0:
                g[i] = a[8];
                break;
            case 4:
                g[i] = a[21];
                break;
            case 12:
                g[i] = a[5];
                break;
            case 2:
                g[i] = a[7];
                break;
            case 16:
                g[i] = a[3];
                break;
            case 8:
                g[i] = a[20];
                break;
            case 10:
                g[i] = a[1];
                break;
            case 6:
                g[i] = a[12];
                break;
            case 26:
                g[i] = a[3];
                break;
            case 14:
                g[i] = a[4];
                break;
            case 20:
                g[i] = a[17];
                break;
            case 22:
                g[i] = a[5];
                break;
            case 24:
                g[i] = a[11];
                break;
            case 32:
                g[i] = a[0];
                break;
            case 30:
                g[i] = a[6];
                break;
            case 18:
                g[i] = a[11];
                break;
            case 28:
                g[i] = a[16];
                break;
            default:
                break;
        };
    };

    for (uwu i = 1; i < 33; i += 2) {
        switch(i) {
            case 1:
                g[i] = a[10];
                break;
            case 3:
                g[i] = a[9];
                break;
            case 5:
                g[i] = a[2];
                break;
            case 7:
                g[i] = a[14];
                break;
            case 11:
                g[i] = a[13];
                break;
            case 13:
                g[i] = a[19];
                break;
            case 25:
                g[i] = a[17];
                break;
            case 15:
                g[i] = a[11];
                break;
            case 17:
                g[i] = a[1];
                break;
            case 31:
                g[i] = a[22];
                break;
            case 19:
                g[i] = a[15];
                break;
            case 21:
                g[i] = a[4];
                break;
            case 23:
                g[i] = a[19];
                break;
            case 27:
                g[i] = a[15];
                break;
            case 29:
                g[i] = a[19];
                break;
            case 9:
                g[i] = a[18];
                break;
            default:
                break;
        };
    };
    // g contains the flag
    printf("Have fun finding the flag, take a look at the source image and see if you can figure it out :)\n");

    return 0;
}