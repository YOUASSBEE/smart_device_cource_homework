#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  // setlocale(LC_ALL, "Rus");
  setlocale(LC_ALL, "en_US.UTF-8");

  FILE *input_file;
  FILE *output_file;
  int N;

  input_file = fopen("input.txt", "r");
  if (input_file == NULL) {
    printf("Не удалось открыть файл input.txt\n");
    return 1;
  }

  fscanf(input_file, "%d", &N);
  fclose(input_file);

  if (N > 26 || N % 2 != 0 || N <= 0) {
    printf("N должно быть четным числом, не превышающим 26\n");
    return 1;
  }

  output_file = fopen("output.txt", "w");
  if (output_file == NULL) {
    printf("Не удалось открыть файл output.txt\n");
    return 1;
  }

  char *result = (char *)malloc((N + 1) * sizeof(char));

  int even_digit = 2;
  char letter = 'A';

  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) {
      result[i] = letter;
      letter++;
    } else {
      result[i] = '0' + even_digit;
      even_digit += 2;

      if (even_digit > 9) {
        even_digit = 2;
      }
    }
  }

  result[N] = '\0';

  fprintf(output_file, "%s", result);
  fclose(output_file);

  printf("%s", result);

  free(result);
  return 0;
}