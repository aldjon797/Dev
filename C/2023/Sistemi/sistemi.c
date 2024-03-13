#include <stdio.h>

void dec2char(int num) {
    printf("%c ", num);
}

void dec2bin(int num) {
    int binary[32];
    int i = 0;

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d ", binary[j]);
    }
}

void dec2hex(int num) {
    printf("0x%X ", num);
}

void dec2oct(int num) {
    int octal[32];
    int i = 0;

    while (num > 0) {
        octal[i] = num % 8;
        num = num / 8;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
}

void char2dec(char c) {
    printf("%d ", c);
}

void hex2dec(char hex[]) {
    int decimal = 0;
    int length = 0;

    while (hex[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length; i++) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal = decimal * 16 + hex[i] - '0';
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal = decimal * 16 + hex[i] - 'A' + 10;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            decimal = decimal * 16 + hex[i] - 'a' + 10;
        }
    }

    printf("%d ", decimal);
}

void bin2dec(char bin[]) {
    int decimal = 0;
    int length = 0;

    while (bin[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length; i++) {
        decimal = decimal * 2 + (bin[i] - '0');
    }

    printf("%d ", decimal);
}

void oct2dec(char oct[]) {
    int decimal = 0;
    int length = 0;

    while (oct[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length; i++) {
        decimal = decimal * 8 + (oct[i] - '0');
    }

    printf("%d ", decimal);
}

int main() {
    int choice, num;
    char c;
    char hex[100];
    char bin[100];
    char oct[100];

    do {
        printf("1] dec2char\n2] dec2bin\n3] dec2hex\n4] dec2oct\n5] char2dec\n6] hex2dec\n7] bin2dec\n8] oct2dec\n0] Esci\nInput: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Input: ");
                scanf(" %c", &c);
                dec2char(c);
                break;
            case 2:
                printf("Input: ");
                scanf("%d", &num);
                dec2bin(num);
                break;
            case 3:
                printf("Input: ");
                scanf("%d", &num);
                dec2hex(num);
                break;
            case 4:
                printf("Input: ");
                scanf("%d", &num);
                dec2oct(num);
                break;
            case 5:
                printf("Input: ");
                scanf(" %c", &c);
                char2dec(c);
                break;
            case 6:
                printf("Input: ");
                scanf("%s", hex);
                hex2dec(hex);
                break;
            case 7:
                printf("Input: ");
                scanf("%s", bin);
                bin2dec(bin);
                break;
            case 8:
                printf("Input: ");
                scanf("%s", oct);
                oct2dec(oct);
                break;
            case 0:
                printf("Esci\n");
                break;
            default:
                printf("Scelta non valida\n");
        }

    } while (choice != 0);

    return 0;
}
