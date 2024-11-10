#include <stdio.h>

int main() {
    int a, b, c, d, e = 0;
    scanf("\n%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e);
    printf("\nsum:%d", (a+b+c+d+e));
    printf("\nrazn:%d", (-a-b-d-c-e));
    printf("\nproiz:%d", (a*b*c*d*e));
    printf("\nostatki ot del na 10: ");
    printf("%d %d %d %d %d", a%10, b%10, c%10, d%10, e%10);
    printf("\nsizeof: %d", sizeof(a));
    return 0;
}