#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_letters 101

int main()
{
  // setlocale(LC_ALL, "Rus");
  setlocale(LC_ALL, "en_US.UTF-8");

  FILE *input_file;
  FILE *output_file;
  char str[max_letters];
  int str_lngth = 0;

  input_file = fopen("input.txt", "r");
  if (input_file == NULL)
  {
    printf("Не удалось открыть файл input.txt\n");
    return 1;
  }

  fscanf(input_file, "%[^\n]", &str);
  fclose(input_file);

  if (strlen(str) > max_letters)
  {
    printf("Строка не должна превышать 100 символов!\n");
    return 1;
  }

  output_file = fopen("output.txt", "w");
  if (output_file == NULL)
  {
    printf("Не удалось открыть файл output.txt\n");
    return 1;
  }

  str_lngth = strlen(str);

  fprintf(output_file, "%s, %s, %s %d", str, str, str, str_lngth);
  fclose(output_file);

  return 0;
}