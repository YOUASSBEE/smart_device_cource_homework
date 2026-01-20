#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
  // setlocale(LC_ALL, "Rus");
  SetConsoleOutputCP(65001);
  SetConsoleCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  FILE *input_file;
  FILE *output_file;

  char word1[101] = {0};
  char word2[101] = {0};

  int count1[26] = {0};
  int count2[26] = {0};

  int first = 1;

  input_file = fopen("input.txt", "r");
  if (input_file == NULL)
  {
    printf("Не удалось открыть файл input.txt\n");
    return 1;
  }

  fscanf(input_file, "%s %s", word1, word2);
  fclose(input_file);

  for (int i = 0; word1[i] != '\0'; i++)
  {
    count1[word1[i] - 'a']++;
  }

  for (int i = 0; word2[i] != '\0'; i++)
  {
    count2[word2[i] - 'a']++;
  }

  output_file = fopen("output.txt", "w");
  if (output_file == NULL)
  {
    printf("Не удалось открыть файл output.txt\n");
    return 1;
  }

  for (char c = 'a'; c <= 'z'; c++)
  {
    int idx = c - 'a';
    if (count1[idx] == 1 && count2[idx] == 1)
    {
      if (!first)
      {
        fprintf(output_file, " ");
      }
      fprintf(output_file, "%c", c);
      first = 0;
    }
  }

  fclose(output_file);

  return 0;
}