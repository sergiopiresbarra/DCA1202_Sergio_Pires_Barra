Questão 13.
Na linglagem C, o endereço de uma função pode ser acessado através de uma variável do tipo ponteiro para
função. Ponteiros para funções podem ser utilizados como argumentos para outras funções e a função apontada pode ser
chamada a partir de seu ponteiro.

Exemplo de função:

#include <stdio.h>

int soma(int a, int b) { return a + b; }
int multiplica(int a, int b) { return a * b; }

typedef int (*Operacao)(int,int);

//Executa uma operação binária sobre dois operandos
int opera(int a, int b, Operacao op) {
  return op(a,b);
}

int main() {
  printf("%d\n", opera(3, 4, soma));       //imprime 7
  printf("%d\n", opera(3, 4, multiplica)); //imprime 12
}