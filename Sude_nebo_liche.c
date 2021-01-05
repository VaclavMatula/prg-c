#include <stdio.h>
int main() {
    int num;
    printf("zadejte celé číslo: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d číslo je sudé.", num);
    else
        printf("%d číslo je liché.", num);
    
    return 0;
}
