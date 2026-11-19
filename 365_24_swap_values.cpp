#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    temp = a; //a=a+b;
    a = b;    //a=a-b;
    b = temp; //b=a-b;

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
