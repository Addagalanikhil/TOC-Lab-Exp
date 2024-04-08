#include<stdio.h>
#include<string.h>
#define MAX 50

int main() {
    int flag = 0;
    char str[MAX];

    printf("Enter the string: \n");
    scanf("%s", str);

    if (str[0] == 'a' && str[strlen(str) - 1] == 'a') {
        flag = 1;
    }

    if (flag == 1) {
        printf("Accept\n");
    } else {
        printf("Reject\n");
    }

    return 0;
}
