/*tento program je urcen k zjisteni zda znak patri nebo nepatri do abecedy*/
#include <stdio.h>
int main() {
    char c;
    printf("zadejte znak: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c patri do abecedy", c);
    else
        printf("%c nepatri do abecedy", c);

    return 0;
}
