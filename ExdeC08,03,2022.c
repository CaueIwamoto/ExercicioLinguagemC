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

//Exercício 3

//Exercício 4

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

//Exercício 7

//Exercício 8

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
