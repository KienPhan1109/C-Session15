#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Phan Trung Kien";
    char del;
    int len = strlen(str);
    int i, j = 0;
    printf("Nhập vào ký tự cần xóa: ");
    scanf("%c", &del);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != del) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
    printf("Mảng sau khi xóa: %s\n", str);
}