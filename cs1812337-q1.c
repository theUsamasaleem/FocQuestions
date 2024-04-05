// Question 1: /5
//Write a C Program which takes two 2 by 2 Array (matrix) as input and prints the sum of the matrix.

#include <stdio.h>

int main() {
  int a[10][10], b[10][10], sum[10][10], i, j;
  int r = 2;
  int c = 2;

  printf("\nData for Matrix 1::\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter Number for (%d,%d): ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Data for Matrix 2:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter Number for (%d,%d): ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  printf("\nAnswer: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }

  return 0;
}

