#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "Portuguese");
  // write a program that sum two notes and the student's name
  float n1; float n2;
  char name[50];
  char res;
  int students = 0;
  do
  {
    system('cls');
    printf("What's your name? ");
    scanf("%s", &name);

    printf("\nWhat's your first note? ");
    scanf("%f", &n1);
    printf("\nWhat's your second note? ");
    scanf("%f", &n2);

    printf("\nThe average between %c is: %f.:2f", name, (n1 + n2)/ 2);
    students++;
    printf("\nDo you want to continue?(y/n) ");
    fflush(stdin);
    scanf("%c", &res);
  } while (res == 'y');
  printf("\n%d students has done this research", students);
}