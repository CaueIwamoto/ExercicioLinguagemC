//Exercícios laboratório algoritmo linguagem C - 08/03/2022

//Exercício 1
#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1;
    float x2, y2;
    
    printf("Digite as coordenadas do 1o. ponto:\n");
    scanf("%f %f", &x1, &y1);
    
    printf("Digite as coordenadas do 2o. ponto:\n");
    scanf("%f %f", &x2, &y2);
    
    printf("Distancia entre os dois pontos: ");
    
    printf("%f",(sqrt(pow(x2-x1, 2) + pow (y2-y1, 2))));
    
    return 0;
}

//Exercício 2
/* Esse primeiro código comentado tá quase certo, apenas estou errando no cálculo:
#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1;
    float x2, y2;
    
    printf("Digite as coordenadas do 1o. ponto:\n");
    scanf("%f %f", &x1, &y1);
    
    printf("Digite as coordenadas do 2o. ponto:\n");
    scanf("%f %f", &x2, &y2);
    
    printf("Distancia entre os dois pontos: ");
    
    printf("%f",(sqrt(pow(x1-x2, 2) + pow (y1-y2, 2))));
    
    return 0;
}
*/

/* Esse código está certo, porém diferente do meu código anterior: */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float dist3(float, float, float, float, float, float);

int main(){
  float a, b, c, d, e, f;
  printf("Digite as coordenadas do 1o. ponto:\n");
  scanf("%f",&a);
  scanf("%f",&b);
  scanf("%f",&c);
  printf("Digite as coordenadas do 2o. ponto:\n");
  scanf("%f",&d);
  scanf("%f",&e);
  scanf("%f",&f);
  printf("Distancia entre os dois pontos: %f", dist3(a, b, c, d, e, f));
}

float dist3(float a, float b, float c, float d, float e, float f){
  float x;
  x=sqrt(((a-d)*(a-d))+((b-e)*(b-e))+((c-f)*(c-f)));
  
  return x;
}

//Exercício 3
/* Esse primeiro código comentado tá quase certo, apenas estou errando no cálculo:
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
   
int main(int argc, char *argv[]){
  float x1, y1, x2, y2;
  float produto_escalar; 
       
  printf("Digite as coordenadas do 1o vetor:\n");
  scanf("%f %f", &x1, &y1);
     
  printf("Digite as coordenadas do 2o vetor:\n");
  scanf("%f %f", &x2, &y2);
     
  produto_escalar = (x2 * y1) + (y1 * x2);
  printf("Produto Escalar: %f", produto_escalar);
  
  return 0;
}
*/


/* Esse código está certo, porém diferente do meu código anterior: */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float prodEsc(float, float, float, float, float, float);

int main(){
  float a, b, c, d, e, f;
  printf("Digite as coordenadas do 1o vetor:\n");
  scanf("%f",&a);
  scanf("%f",&b);
  scanf("%f",&c);
  printf("Digite as coordenadas do 2o vetor:\n");
  scanf("%f",&d);
  scanf("%f",&e);
  scanf("%f",&f);
  printf("Produto Escalar: %f", prodEsc(a, b, c, d, e, f));
}

float prodEsc (float a, float b, float c, float d, float e, float f){
  float x;
  x=((a*d)+(b*e)+(c*f));
  
  return x;
}

//Exercício 4
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926535

int main(){
  double a, x;
  printf("Digite o angulo em graus:\n");
  
  scanf("%lf", &a);
  x = cos(a*PI/180);
  
  printf("O cosseno de %lf graus eh %lf", a, x);

}

//Exercício 5
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


void arccos(float entrada){
    printf("\nO arccos de %f eh %.2f graus.", entrada, (acos(entrada)*180)/3.14159265358979323846);

}

int main(){
    
    float entrada;
    printf("Digite o valor do arccos:");
    scanf("%f", &entrada);
    arccos(entrada);
}

//Exercício 6
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926535

int main(){
  double a, x=0;
  printf("Digite o angulo em radianos:\n");
  
  scanf("%lf", &a);
  x = (a*180)/PI;
  
  printf("O angulo de %.6f radianos equivale a %.6f graus.",a, x); 
}

//Exercício 7
#include <stdio.h>
#include <math.h>


int main(){
    float a, b, c, d;
    printf("Digite as coordenadas do vetor:\n");
    
    scanf("%f %f %f", &a, &b, &c);
    d = sqrt((a*a)+(b*b)+(c*c));
    
    printf("Modulo do vetor: %f",d);
}

//Exercício 8
#include <stdio.h>
#include <math.h>
#define PI 3.14159265359


int main(){
    float a, b, c, d, e, f, g, h, i, j, k, l, m;
    printf("Digite as coordenadas do 1o vetor nao nulo:\n");
    scanf("%f %f %f", &a, &b, &c);
    printf("Digite as coordenadas do 2o vetor nao nulo:\n");
    scanf("%f %f %f", &d, &e, &f);
    g=(a*d)+(b*e)+(c*f);
    h=sqrt((a*a)+(b*b)+(c*c));
    i=sqrt((d*d)+(e*e)+(f*f));
    k=h*i;
    j=g/k;
    l=acos(j);
    m=l*180/PI;
    
    printf("Angulo entre os dois vetores: %f graus.",m);
}

//Exercício 9
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    float entrada2, soma;
    int entrada1;
    soma = 0;
    
    scanf("%d", &entrada1);

    for (int i = entrada1; i > 0; i--){
        scanf("%f", &entrada2);
        soma = entrada2+soma;
    }
    printf("Media = %f", soma/entrada1);

}

//Exercício 10
#include <stdio.h>
#include <math.h>

int main() {
    int QTD_ELEMENTOS;
    scanf("%d", &QTD_ELEMENTOS);
    int vetor[QTD_ELEMENTOS];

    for (int i = 0; i < QTD_ELEMENTOS; i++) {
        //printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }
    
    int somatorio = 0;
    for (int i = 0; i < QTD_ELEMENTOS; i++) {
        somatorio += vetor[i];
    }

    float media = somatorio / (float) QTD_ELEMENTOS;

    float variacoes = 0;
    for (int i = 0; i < QTD_ELEMENTOS; i++) {
        float v = vetor[i] - media;
        variacoes += v * v;
    }

    float sigma = sqrt(variacoes / (QTD_ELEMENTOS-1));
    printf("Desvio Padrao Amostral = %f", sigma);
    printf("\nVariancia Amostral = %f", sigma*sigma);
    
return 0;
}

//Exercício 11
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int entrada, teste;
    teste = 0;
    printf("Digite um numero inteiro e positivo:");
    scanf("%d", &entrada);

    for(int i = 2; i <= entrada; i++){
        if(entrada%i == 0){
            teste++;
        }
    }
    if(teste >= 2){
        printf("\nComposto");
    }else{
    printf("\nPrimo");
    }
}

//Exercício 12
#include <stdio.h>
#include <math.h>

int main(){
    
    int numPontos;
    float somaX = 0, somaY = 0;
    float alfa = 0, beta = 0,sxy = 0, sxx = 0,syy = 0, y, x, mediaX, mediaY, r;
    
    printf("Digite o numero de pontos:\n");
    scanf("%d", &numPontos);
    
    for (int i = 0; i < numPontos; i++){
        printf("Digite o valor da variavel x:\n");
        scanf("%f", &x);
        somaX+=x;
        printf("Digite o valor da variavel y:\n");
        scanf("%f", &y);
        somaY+=y;
        sxy += (x*y);
        sxx += (x*x);
        syy += (y*y);
    }
    
    mediaX = somaX/numPontos;
    mediaY = somaY/numPontos;
    sxy -= (somaX*somaY);
    sxx -= (numPontos*(mediaX*mediaX));
    syy -= (numPontos*(mediaY*mediaY));
    beta = sxy/sxx;
    alfa = mediaY - (beta*mediaX);
    r = (sxy/sqrt(sxx*syy));
    
    printf("Equacao do Modelo: y = %.6f*x + (%.6f)\n", beta, alfa);
    printf("Coeficiente de correlacao: %.6f\n", r);
    
    printf("Digite o valor a ser estimado:\n");
    scanf("%f", &x);
    y = x*beta + alfa;
    printf("Estimativa para x = %.6f eh y= %.6f",x,y);
}
