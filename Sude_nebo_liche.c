#include <stdio.h>
int main() {
    int num;
    printf("zadejte celé číslo: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d sudé.", num);
    else
        printf("%d liché.", num);
    
    return 0;
}
