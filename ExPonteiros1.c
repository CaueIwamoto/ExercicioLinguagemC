//Exercício laboratório algoritmo - 29/03/2022

//Exercício 1:
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double modulo(double vetor[], int);

int main() {
  int n;
  scanf("%d", &n);
  double vetor[n];
  for (int i=0; i<n; i++){
    scanf("%lf", &vetor[i]);
  }
  
  printf("Modulo = %.4lf", modulo(vetor, n));
}

double modulo (double *vetor, int n){
  
  double soma=0;
  for (int i=0; i<n; i++){
    soma+=vetor[i]*vetor[i];
  }
  
  return sqrt(soma);
}


//Exercício 2:
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double prodEsc (double *u, double *v, int n)
{
  double soma1=0;
  for(int i=0; i<n; i++){
    soma1+=u[i]*v[i];
  }
  
  return soma1;
}

int main()
{
    int i = 0;
    int tam = 0;
    double presc = 0;

    scanf("%d", &tam);

    double x[tam];
    double y[tam];

    for (i = 0; i < tam; i++)
        scanf("%lf", &x[i]);

    for (i = 0; i < tam; i++)
        scanf("%lf", &y[i]);

    presc = prodEsc(x, y, tam);

    printf("Produto Escalar = %.4lf\n", presc);

    return 0;
}

/*Exercício 3:
Linha 16: 8
Linha 17: 3
Linha 18: 5


Exercício 4:
Linha 11: 5
Linha 12: 10
Linha 13: #5008
Linha 14: #5012
Linha 15: 5
*/
