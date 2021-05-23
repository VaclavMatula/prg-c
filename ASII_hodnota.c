/* tento program je urcen k vypsani ASCII hodnoty zadaneho pismena */
#include <stdio.h>
int main() {  
    char c;
    printf("Zadejte pismeno: ");
    scanf("%c", &c);  
    printf("ASCII hodota vaseho pismena %c = %d", c, c);
    
    return 0;
}
