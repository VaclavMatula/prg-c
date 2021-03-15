#include <stdio.h>
int main() {
   int i, space, h, k = 0;
   printf("h=: ");
   scanf("%d", &h);
   for (i = 1; i <= h; ++i, k = 0) {
      for (space = 1; space <= h - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}
