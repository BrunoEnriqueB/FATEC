#define N 50
typedef struct pilha
{
  int topo; // indica o topo da pilha
  float vet[N];
} Pilha;

Pilha *pilha_cria()
{ // fun��o do tipo ponteiro p/ pilha - retorna o endere�o da pilha
  Pilha *p = (Pilha *)malloc(sizeof(Pilha));
  p->topo = 0;
  return p;
}
int pilha_vazia(Pilha *p)
{ // retorna 1 se a pilha estiver vazia ou 0 se tem algo
  if (p->topo == 0)
    return 1;
  return 0;
}
void pilha_insere(Pilha *p, float v)
{ // insere o item na pilha
  if (p->topo == N)
  {
    printf("Capacidade da pilha esgotada.\topo");
    return; // volta para o programa
  }         // insere novo elemento
  p->vet[p->topo] = v;
  p->topo++; // incrementa o topo
}
float pilha_retira(Pilha *p)
{ // retira o elemento que est� no topo
  float v;
  // retira o elemento da pilha
  v = p->vet[p->topo - 1]; // o �ltimo colocado est� em p->topo-1
  p->topo--;
  return v;
}
void pilha_libera(Pilha *p)
{
  free(p);
}
void pilha_mostra(Pilha *p)
{
  printf("Conteudo da pilha\n");
  for (int i = p->topo - 1; i >= 0; i--)
    printf("%.1f\n", p->vet[i]);
  printf("\n");
}
