#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "*** --Phan Trung Kien @11 09 2006@-- ***";
    int len = strlen(str);
    int i = 0, countChar = 0, countNum = 0, countSpen = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') 
        {
            countChar ++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            countNum ++;
        }
        else
        {
            countSpen ++;
        }
        i++;
    }
    printf("\nSố ký tự chữ cái là: %d", countChar);
    printf("\nSố ký tự chữ số là: %d", countNum);
    printf("\nSố ký tự đặc biệt là: %d", countSpen);
}