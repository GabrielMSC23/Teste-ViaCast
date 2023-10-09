#include <stdio.h>
#include <string.h>

// funçao com ponteiro para definir posição das letras
void reverseString(char *in, char *out)
{
  int i, j;
  int N = strlen(in);
  for (i = 0, j = N - 1; j >= 0; ++i, --j)
  {
    out[i] = in[j];
  }
  out[N] = '\0';
}
// funçao com ponteiro para definir posição das letras
void reverseStringInPlace(char *str)
{
  int length = strlen(str);
  int inicio = 0;
  // laço para mudar ponteiro ate limite de caracteres da variavel str
  for (int final = 0; final <= length; final++)
  {
    if (str[final] == ' ' || str[final] == '\0') // delimita quando deve começar a troca
    {
      int i = inicio;
      int j = final - 1;

      while (i < j) // realiza a troca das letras
      {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
      }

      inicio = final + 1; // segue para o proximo caracter válido
    }
  }
}

int main()
{
  char string_in[50];
  char stringReversed[50];

  printf("Enter the string to be reversed:\n>>");
  gets(string_in);

  reverseString(string_in, stringReversed);
  printf("reversed = '%s'\n", stringReversed);

  reverseStringInPlace(string_in);
  printf("String com letras invertidas: %s\n", string_in);

  return 0;
}