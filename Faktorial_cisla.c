#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("zadejte integer: ");
    scanf("%d", &n);

    // vypise error pokud zadate negativni cislo
    if (n < 0)
        printf("Error! zadane cislo musi byt kladne");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial pro cislo %d = %llu", n, fact);
    }

    return 0;
}
