#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void pyramid();
void inverted_pyramid();
void pascal_triangle();
void floyd_triangle();

int main(){
printf("Enter number which pattern you want to print:\n1.\tPyramid of *\n2.\tInverted Pyramid of *\n3.\tPascal's Triangle\n4.\tFloyd's Triangle\n");
int n;
scanf("%d",&n);
switch (n)
{
case 1:
    pyramid();
    break;
case 2:
    inverted_pyramid();
    break;
case 3:
    pascal_triangle();
    break;
case 4:
    floyd_triangle();
    break;
default:
    printf("Error: Value not between 1-4\n");
    break;
}
return 0;
}


void pyramid(){
int i, space, rows, k = 0;
   printf("Enter the number of rows: \n");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
}


void inverted_pyramid(){
int rows, i, j, space;
   printf("Enter the number of rows: \n");
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) {
      for (space = 0; space < rows - i; ++space)
         printf("  ");
      for (j = i; j <= 2 * i - 1; ++j)
         printf("* ");
      for (j = 0; j < i - 1; ++j)
         printf("* ");
      printf("\n");
   }
}


void pascal_triangle(){
 int rows, coef = 1, space, i, j;
   printf("Enter the number of rows: \n");
   scanf("%d", &rows);
   for (i = 0; i < rows; i++) {
      for (space = 1; space <= rows - i; space++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            coef = 1;
         else
            coef = coef * (i - j + 1) / j;
         printf("%4d", coef);
      }
      printf("\n");
   }
}


void floyd_triangle(){
 int rows, i, j, number = 1;
   printf("Enter the number of rows: \n");
   scanf("%d", &rows);
   for (i = 1; i <= rows; i++) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", number);
         ++number;
      }
      printf("\n");
   }
}
