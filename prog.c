#include <stdio.h>

int main(){
    int x;
    printf("Введите значение x: ");
    scanf("%d", &x);

    int result = 3 * x * x + 72 * x - 168;
    printf("Значение выражения 3*x^2+72*x-168 при x=%d равно %d\n", x, result);

    return 0;
}
