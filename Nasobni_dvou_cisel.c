#include <stdio.h>
int main() {
    double a, b, product;
    printf("zadejte dvě čísla: ");
    scanf("%lf %lf", &a, &b);  
 
    product = a * b;
    printf("výsledek náśobení = %.2lf", product);
    
    return 0;
}
