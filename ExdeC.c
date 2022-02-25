//Exercícios em C 2022 - Exercício laboratório de algoritmo 14/02/2022

//Alguns "importações" (similares do Python) importantes:
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



//Exercício 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int numero,quadrado;
    scanf("%d",&numero);
    quadrado = pow(numero,2);
    printf("%d", quadrado);

    return 0;
}


//Exercício 2
#include <stdio.h>
#include <stdlib.h>

int main(){

    double a, b, c, resultado;

    scanf("%lf%lf%lf", &a, &b, &c);

    resultado = -b/(2*a);
    printf("%.4lf", resultado);
}

//Exercício 3
#include <stdio.h>
#include <stdlib.h>

int main() {
    int seg, h, m, s, resto;
    
    scanf("%d", &seg);
    
    h = seg / 3600;
    resto = seg % 3600;
    m = resto / 60;
    s = resto % 60;
    
    printf("%d:%d:%d\n", h, m, s);
    
    return 0;
}

//Exercício 4
#include <stdio.h>
#include <stdlib.h>

int main (){
    double Q, L, P, MEDIA;
    
    scanf("%lf%lf%lf", &Q, &L, &P);
    
    MEDIA = (Q * 2 + L * 3 + P * 5)/10;
    
    printf("MEDIA = %.1lf", MEDIA);
    
    return 0;
}

//Exercício 5
#include <stdio.h>
#include <stdlib.h>


int main() {
  int numero, cem, cinquenta, vinte, dez, cinco, dois, um, restodiv;

  scanf("%d", &numero);

  cem = numero / 100;
  restodiv = numero % 100;
  cinquenta = restodiv / 50;
  restodiv = numero % 50;
  vinte = restodiv / 20;
  restodiv = restodiv % 20;
  dez = restodiv / 10;
  restodiv = restodiv % 10;
  cinco = restodiv / 5;
  restodiv = restodiv % 5;
  dois = restodiv / 2;
  restodiv = restodiv % 2;
  um = restodiv / 1;
  restodiv = restodiv % 1;

  printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00", cem, cinquenta, vinte, dez, cinco, dois, um);

  return 0;
}

//Exercício 6
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero1, numero2, numero3, resultado, NUMERO;
    
    scanf("%d", &NUMERO);
    
    numero1= (NUMERO / 100) % 10;
    numero2= (NUMERO / 10) % 10;
    numero3= NUMERO % 10;
    
    resultado = (numero1 + (numero2 * 3) + (numero3 * 5)) % 7;
    
    printf("%d%d", NUMERO, resultado);
    
    return 0;
}
