#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
int v[5] = {110, 30, 220, 284, 140};
int i, resto;
int n1, n2, soma, soma_m;
float soma_d, soma_di;
do
{srand(time(NULL));
// Sorteia dois índices aleatórios do vetor
n1 = v[rand() % 5];
n2 = v[rand() % 5];
printf("Números sorteados: %d e %d\n", n1, n2);
}while (n1 == ! n2);
printf("Divisores do numero %d:\n", n1);
soma = 0;
for (i = 1; i < n1; i++) {
resto = n1 % i;
if (resto == 0) {
printf("\t %d", i);
soma += i;
}
}
printf("\nSoma: %d\n", soma);
printf("Divisores do numero %d:\n", n2);
soma_m = 0;
for (i = 1; i < n2; i++) {
resto = n2 % i;
if (resto == 0) {
printf("\t %d", i);
soma_m += i;
}
}
printf("\nSoma: %d\n", soma_m);
if(soma == soma_m)
printf("Os numeros %d e %d sao amigaveis :)", n1, n2);
else
printf("Os numeros %d e %d nao sao amigaveis :(\n", n1, n2);
printf("\n");
printf("\n");
do
{srand(time(NULL));
// Sorteia dois índices aleatórios do vetor
n1 = v[rand() % 5];
n2 = v[rand() % 5];
printf("Números sorteados: %d e %d\n", n1, n2);
}while (n1 == ! n2);
printf("Divisores do numero %d:\n", n1);
soma = 0;
for (i = 1; i < n1+1; i++) {
resto = n1 % i;
if (resto == 0) {
printf("\t %d", i);
soma += i;
soma_d = soma/n1;
}
}
printf("\nSoma: %d\n", soma);
printf("\nResultado: %.2f\n", soma_d);
printf("Divisores do numero %d:\n", n2);
soma = 0;
for (i = 1; i < n2+1; i++) {
resto = n2 % i;
if (resto == 0) {
printf("\t %d", i);
soma += i ;
soma_di = soma/n2;
}
}
printf("\nSoma: %d\n", soma);
printf("\nResultado: %.2f\n", soma_di);
if (soma_d == soma_di)
printf("Os numeros %d e %d sao mutuamente amigos :)", n1, n2);
else
printf("Os numeros %d e %d nao sao mutuamente amigos :( ", n1,
n2);
return 0;
}