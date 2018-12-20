#include <stdio.h>
int main()
{
  int begin = 0, end = 1, sredina, odg;
  printf("Zamislite prirodan broj!\n");
  while (1)
  {
    printf("Da li je broj veci od %d? (1/0) ", end);
    scanf("%d", &odg);
    if (!odg) break;
    begin = end + 1; end *= 2;
  }
  while (begin < end)
  {
    sredina = (begin + end) / 2;
    printf("Da li je broj veci od %d? (1/0) ", sredina);
    scanf("%d", &odg);
    if (odg) begin = sredina + 1;
    else end = sredina;
  }
  printf("Zamislili ste broj: %d", end);
  return 0;
}
