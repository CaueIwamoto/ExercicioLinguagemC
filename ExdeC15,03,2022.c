//Exercício 1
#include <stdio.h>

double media(double[], int);

int main(){
  int a;
  
  scanf("%d", &a);
  double v[a];
  for (int i=0; i< a; i++){
    scanf("%lf", &v[i]);
    }
  printf("%.2lf", media(v, a));
  
}

double media(double v[], int a){
  double soma=0;
  double media;
  
  for (int i=0; i<a; i++){
    soma+= v[i];
  }
  
  media = soma/a;
  
  return media;
}

//Exercício 2

//Exercício 3

//Exercício 4

//Exercício 5

//Exercício 6

//Exercício 7

//Exercício 8

//Exercício 9

//Exercício 10

//Exercício 11

//Exercício 12
