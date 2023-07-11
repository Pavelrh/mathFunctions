#include <stdio.h>

void main() {
    int a, result;
    printf("enter the number\n");
    scanf("%d", &a);

    for (int i = 0; i <= 10; i++){
        result = a * i;
        printf("%d x %d = %d\n", a, i, result);
    }
}