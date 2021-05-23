/*program na urceni zda je zadane cislo prvocislo nebo neni*/
#include <stdio.h>
int main() {
  int n, i, flag = 0;
  printf("zadejte kladny integer vetsi nez 1: ");
  scanf("%d", &n);

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (n == 1) {
    printf("1 neni vetsi nez 1");
  } 
  else {
    if (flag == 0)
      printf("%d je prvocislo.", n);
    else
      printf("%d neni prvocislo.", n);
  }

  return 0;
}
