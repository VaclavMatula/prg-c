/*tento program vypise pocet cislic v integeru*/
#include <stdio.h>
int main() {
    long long n;
    int count = 0;
    printf("zadejte integer: ");
    scanf("%lld", &n);
    while (n != 0) {
        n /= 10;     // n = n/10
        ++count;
    }

    printf("pocet cislic: %d", count);
}
