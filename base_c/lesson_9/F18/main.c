#include <stdio.h>

int find_max_in_row(int row[]) {
  int max = row[0];
  for (int i = 1; i < 10; i++) {
    if (row[i] > max) {
      max = row[i];
    }
  }
  return max;
}

int main() {
  int matrix[10][10];
  int total_sum = 0;

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  for (int i = 0; i < 10; i++) {
    total_sum += find_max_in_row(matrix[i]);
  }

  printf("%d\n", total_sum);

  return 0;
}