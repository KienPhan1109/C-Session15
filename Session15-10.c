#include <stdio.h>

int main() {
    char str[] = "Phan Trung Kien";
    int count[1000] = {0};
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }
    for (i = 0; i < 1000; i++) {
        if (count[i] > 0) {
            printf("'%c': %d\n", i, count[i]);
        }
    }
    return 0;
}