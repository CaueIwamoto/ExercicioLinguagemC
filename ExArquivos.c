//Exercício laboratório no moodle do dia 26/04/2022

//Exercício 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fr = fopen("maiorR.txt","r");
    
    int i, ind=0;
    float maior=0, num1;
    int total = sizeof(float)*sizeof(fr);
    
    
    for(i=0;i<sizeof(float)*sizeof(fr);i++){
        fscanf(fr,"%f", &num1);
        if(maior<num1){
            maior=num1;
            ind=i;
        }
    }

    printf("Maior: %.4f na posicao %d\n", maior, ind + 1);
    printf("Total de Elementos: %d\n", total);
}

//Exercício 2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fr=fopen("quadradoR.txt", "r");

    float z;
    float x, y; 

    for(int i=0; i<8; i++){
        fscanf(fr, "%f %f", &x, &y);
        z = (x * x) + (y * y);
        printf("%.4f %.4f %.4f\n", x, y, z);
    }
    
    return 0;
}

//Exercício 3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fr=fopen("notasR.txt", "r");

    char Nome[500];
    float Nota;
    

    for (int i=0; i<500; i++){
        fscanf(fr, "%s %f", Nome, &Nota);
        if(Nota >= 5){
            printf("%s %.1f\n", Nome, Nota);
        }       
    }
    return 0;
}

//Exercício 4


//Exercício 5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fr=fopen("empresaR.txt", "r");
    int tam = sizeof(fr)+2;
    char nome[tam];
    char genero;
    int idade; 

    int total25 = 0;
    int totalf = 0;

    
    printf("Total de funcionarios: %d\n\n", tam);

    for (int i=0; i<tam; i++){
        fscanf(fr, "%s %c %d", nome, &genero, &idade);
        if(idade>25){
            total25 = total25 + 1;
            printf("Nome do funcionario +25: %s idade: %d\n", nome, idade);
        }
        if(genero == 'f'){
            totalf = totalf + 1;
        }    
    }
    printf("\nTotal de funcionarios +25: %d\n", total25);
    printf("\nTotal de funcionarias: %d", totalf);
    return 0;
}
