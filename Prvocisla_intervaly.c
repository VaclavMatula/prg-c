/*tento program vypise vsechna prvocisla mezi dvema intervaly*/
#include <stdio.h>
int main() {
   int low, high, i, flag;
   printf("zadejte dva kladne intervaly: ");
   scanf("%d %d", &low, &high);
   printf("Prvocisla mezi %d a %d jsou: ", low, high);
   while (low < high) {
      flag = 0;

      // ingnoruje mene nez 2
      if (low <= 1) {
         ++low;
         continue;
      }

      for (i = 2; i <= low / 2; ++i) {

         if (low % i == 0) {
            flag = 1;
            break;
         }
      }

      if (flag == 0)
         printf("%d ", low);

      ++low;
   }

   return 0;
}
