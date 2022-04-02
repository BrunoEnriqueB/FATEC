#include <stdlib.h>
#include <stdio.h>

void ocorrencias(char *p)
{
  char *auxiliar = p;
  int tamanho = 0;
  while (*auxiliar != '\0')
  {
    tamanho++;
    auxiliar++;
  }
  auxiliar = p;
  int vetorOcorrencias[tamanho], cont = 0;

  for (int i = 0; i < tamanho; i++)
  {
    vetorOcorrencias[i] = 0;
  }

  while (*auxiliar != '\0')
  {
    char letra = *auxiliar;
    for (char *i = auxiliar; *i != '\0'; i++)
    {
      if (i == auxiliar && *i != '-')
      {
        vetorOcorrencias[cont] = 1;
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
    auxiliar++;
  }
  auxiliar = p;
  cont = 0;
  while (*auxiliar != '\0')
  {
    if (*auxiliar != '-')
    {
      printf("A letra %c apareceu %d vezes\n", *auxiliar, vetorOcorrencias[cont]);
      cont++;
    }
    auxiliar++;
  }

  printf("%s", p);
}

void main()
{
  char palavra[] = "caralho essa porra";
  ocorrencias(palavra);
}