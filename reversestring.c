#include <stdio.h> #importa a bliblioteca com funções basicas de entrada e saída
#include <string.h> #importa a biblioteca com funções para manipular string

// funçao com ponteiro para definir posição das letras
void reverseString(char *in, char *out)
{
  int i, j;
  int N = strlen(in); 
  for (i = 0, j = N - 1; j >= 0; ++i, --j) //O laço copia a posiçao final de in para posiçao inicial de out.
  {
    out[i] = in[j];
  }
  out[N] = '\0'; //acrescenta nulo no final da string para torna-la valida na linguagem C
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

      inicio = final + 1; // segue para a proxima palavra na string se tiver.
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
