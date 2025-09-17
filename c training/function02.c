#include <stdio.h>

void evenOdd(int a) {
    if (a % 2 == 0)
        printf("%d is Even\n", a);
    else
        printf("%d is Odd\n", a);
}

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    // Function call
    evenOdd(a);

    return 0;
}