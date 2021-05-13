#include<stdio.h>

int main() {
 char l, r1[5], r2[5];

  int i, j = 0;


  printf("\nEnter Left Non-Terminal :\t");

  scanf("%c->%s / %s", & l, r1, r2);

  if (l == r1[0])

  {

    printf("\nLeft Recusion ");

    for (i = 1; r1[i - 1] != '\0'; i++)
      r1[j++] = r1[i];

    printf("Solution :");

    printf("\n\t\t%c->%s%c'\n\t\t%c' >%s %c'/%c", l, r2, l, l, r1, l,
      238);

  }

  if (l == r2[0]) {

    printf("\nLeft Recusion ");

    for (i = 1; r2[i - 1] != '\0'; i++)
      r2[j++] = r2[i];

    printf("Solution :");

    printf("\n\t\t%c->%s %c'\n\t\t%c'->%s%c'/%c", l, r1, l, l, r2, l,
      238);

  }

 return 0;
}

