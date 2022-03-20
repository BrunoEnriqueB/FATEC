#include <stdlib.h>
#include <stdio.h>

void ocorrencias(char *p)
{
  char *inicio = p;
  int tamanho = 0;
  while (*p != '\0')
  {
    tamanho++;
    p++;
  }
  p = inicio;
  int vetorOcorrencias[tamanho], cont = 0;
  while (*p != '\0')
  {
    char letra = *p;
    for (char *i = p; *i != '\0'; i++)
    {
      if (i == p && *i != '-')
      {
        vetorOcorrencias[cont]++;
      }
      else if (*i == letra && *i != '-')
      {
        vetorOcorrencias[cont]++;
        *i = '-';
      }
    }
    if (vetorOcorrencias[cont] != 0)
    {
      cont++;
    }
    p++;
  }
}

void main()
{
  char palavra[] = "arara";
  ocorrencias(palavra);
}