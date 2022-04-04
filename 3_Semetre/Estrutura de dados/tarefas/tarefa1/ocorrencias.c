#include <stdlib.h>
#include <stdio.h>

void contaLetras(char *p)
{                   // recebe o ponteiro da palavra
  char *inicio = p; // pega o endereço do ponto inicial da palavra

  int tamanho = 0; // variável que vai conter o tamanho da palavra
  while (*p != '\0')
  { // loop para conseguir o tamanho da palavra
    tamanho++;
    p++;
  }

  p = inicio;                              // volta p para o endereço inicial
  int vetorOcorrencias[tamanho], cont = 0; // cria um vetor com o tamanho da palavra
  char original[tamanho];                  // cria um vetor de string com o tamanho da palavra
  for (int i = 0; i < tamanho; i++)
  {                          // f
    vetorOcorrencias[i] = 0; // zera o vetor recem criado com o tamanho da palavra
    original[i] = p[i];      // cópia os caracteres da palavra pro vetor recem criado
  }

  while (*p != '\0')
  {                  // while que vai rodar a palavra
    char letra = *p; // pega a letra que está sendo verificada na hora
    for (char *i = p; *i != '\0'; i++)
    { // for que vai rodar da letra atualmente indexada até o final da palavra
      if (i == p && *i != '-')
      {                           // verifica se a letra atual é a primeira que aparece
        vetorOcorrencias[cont]++; // se sim, adiciona a primeira ocorrencia
      }
      else if (*i == letra && *i != '-')
      {                           // verifica se existem outros caracteres iguais a variável letra, sendo diferente de '-'
        vetorOcorrencias[cont]++; // se sim, incrementa a quantidade de ocorrencias dessa letra
        *i = '-';                 // e o endereço do caracter contado virá '-'
      }
    }

    if (vetorOcorrencias[cont] != 0)
    { // só vai pro próximo index do vetorOcorrencias se houve alguma ocorrencia da letra sendo verificada
      cont++;
    }
    p++;
  }

  p = inicio; // volta p para o endereço inicial
  cont = 0;
  while (*p != '\0')
  { // printa na tela as ocorrencias das letras na palavra
    if (*p != '-')
    {
      printf("A letra %c apareceu %d vezes\n", *p, vetorOcorrencias[cont]);
      cont++;
    }
    p++;
  }
  p = inicio;                       // volta p para o endereço inicial
  for (int i = 0; i < tamanho; i++) // volta a palavra pra sua forma original
    p[i] = original[i];
}

void main()
{
  char palavra[] = "joao";
  contaLetras(palavra);
}