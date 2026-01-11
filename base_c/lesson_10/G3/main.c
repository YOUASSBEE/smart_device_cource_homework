#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_letters 100

int main()
{
  // setlocale(LC_ALL, "Rus");
  setlocale(LC_ALL, "en_US.UTF-8");

  FILE *input_file;
  FILE *output_file;
  char str[max_letters + 1];
  int str_length = 0;
  char last_symbol;

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

  str_length = strlen(str);
  last_symbol = str[str_length - 1];

  for (int i = 0; i < str_length - 1; i++)
  {
    int index = 0;
    if (str[i] == last_symbol)
    {
      index = i;
      fprintf(output_file, "%d ", index);
    }
  }
  fclose(output_file);

  return 0;
}