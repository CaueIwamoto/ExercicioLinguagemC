//Exercício laboratório algoritmo - 22/03/2022

//Exercício 1
#include <stdio.h>
#include <stdlib.h>

int main() {
  int li,co;
  
  printf("Tamanho da matriz A:\n");
  scanf("%d %d", &li ,&co);
  double m[li][co];
  
  printf("Matriz A:\n");
  for (int i=0; i<li;i++){
    for(int j=0;j<co;j++){
      scanf("%lf", &m[i][j]);
    }
  }
  
  printf("Digite o vetor com %d coordenadas:\n", co);
  double v[co];
  for(int i=0;i<co;i++){
    scanf("%lf", &v[i]);
  }
  double v2[li];
  for(int i=0;i<li;i++){
    for(int j=0;j<co;j++){
      v2[i]+=m[i][j]*v[j];
    }
  }
  printf("Produto de A por v:\n");
  for(int i=0;i<li;i++){
    printf("%.4lf\n", v2[i]);
  }
  
  return 0;
    
  }

/*Exercício 2
Esse código comentado a seguir é o que eu tentei fazer, porém deu errado (não sei pq):
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int j;
    int linhaA;
    int colunaA;
    int linhaB;
    int colunaB;
    printf("Tamanho da matriz A:\n");
    scanf("%d %d", &linhaA, &colunaA);
    
    printf("Tamanho da matriz B:\n");
    scanf("%d %d", &linhaB, &colunaB);
    if(colunaA!=linhaB){
        printf("Dados incorretos.\n");
    }
    else{
        
    int matrizA[linhaA][colunaA];
    int matrizB[linhaB][colunaB];
    int matrizAB[linhaA][colunaB];
    
    for(i=0;i<linhaA;i++){
        for(j=0;j<colunaA;j++){
            scanf("%d", &matrizA[i][j]);
        }
    }
    for(i=0;i<linhaB;i++){
        for (j=0;j<colunaB;j++){
            scanf("%d", &matrizB[i][j]);
        }
    }
    int k;
    int mult;
    int soma = 0;
    for(i=0;i<linhaA;i++){
        for (j=0;j<colunaB;j++){
            for (k=0;k<linhaB;k++){
                printf("Multiplicando %d por %d\n", matrizA[i][k], matrizB[k][j]);
             mult = matrizA[j][k] * matrizB[k][j];   
             soma += mult;
            }
            matrizAB[i][j] = soma;
            soma = 0;
            
        }
    }
    for (i=0;i<linhaA;i++){
        for (j=0;j<colunaB;j++){
            printf("%d  ", matrizAB[i][j]);
        }
        printf("\n");
        
    }
  
}
}


printf("Matriz A:\n");

printf("Matriz B:\n");

printf("Matriz AB:\n");

printf(" %3.4lf ", M[i][j]);

printf("\n");
*/

/*Resposta correta do exercício 2:*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int lia,coa,lib,cob;
    printf("Tamanho da matriz A:\n");
    scanf("%d %d", &lia ,&coa);
    
    printf("Tamanho da matriz B:\n");
    scanf("%d %d", &lib ,&cob);
    
    double ma[lia][coa];
    double mb[lib][cob];
    double mr[lia][cob];
  
    if(coa==lib){
        printf("Matriz A:\n");
        for (int i=0; i<lia;i++){
        for(int j=0;j<coa;j++){
            scanf("%lf", &ma[i][j]);
        }
        }
        printf("Matriz B:\n");
        for (int i=0; i<lib;i++){
        for(int j=0;j<cob;j++){
            scanf("%lf", &mb[i][j]);
        }
        }
        for(int i =0; i<lia;i++){
        for(int j=0; j<cob; j++){
            for(int k=0; k<coa;k++){
            mr[i][j]+=ma[i][k]*mb[k][j];
            }
        }
        }
        printf("Matriz AB:\n");
        for(int i=0;i<lia;i++){
        printf(" ");
        for(int j=0;j<cob;j++){
            printf("%.4lf", mr[i][j]);
            printf("  ");
        }
        printf("\n");
        }
    
    }
    else{
        printf("Dados incorretos.");
    }
    

}

//Exercício 3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LIMIT 100

int main(){
    char mensagem[MAX_LIMIT] ;
    int matriz[2][2];
    int tamanhoMensagem;
    
    
    
    
    
   printf("Mensagem:\n");
   fgets(mensagem, MAX_LIMIT, stdin);
   
   
   
   printf("Matriz A:\n");
   for (int i=0;i<2;i++){
       for (int j=0;j<2;j++){
           scanf("%d",&matriz[i][j]);
       }
   }

    tamanhoMensagem = strlen(mensagem);
    
    
printf("Tamanho da mensagem: %d\n",tamanhoMensagem-1);

int mult,conta;
conta=0;
    
    
    
    
    int soma=0;    
    
    printf("Mensagem Cifrada:\n"); 
    for (int k=0;k<tamanhoMensagem/2;k++){
        
    
    for (int i=0;i<2;i++){
        soma = 0;
        for (int j=0;j<2;j++){
            
            
            mult = matriz[i][j]*mensagem[j+conta];
            soma += mult;
        }
        
        printf("%d\n", soma);
        
        
    }
    conta +=2;
    }
    
    

}


//Exercício 4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LIMIT 100

int main(){
     
    int matriz[2][2];
    int tamanhoMensagem;
    
    
    printf("Digite o tamanho do vetor:\n");
    scanf("%d",&tamanhoMensagem);
    
    int mensagemCifrada[tamanhoMensagem];
    printf("Matriz A:\n");
   for (int i=0;i<2;i++){
       for (int j=0;j<2;j++){
           scanf("%d",&matriz[i][j]);
       }
   }
   
   printf("Mensagem cifrada:\n");
   for (int i=0;i<tamanhoMensagem;i++){
       scanf("%d",&mensagemCifrada[i]);
   }
   printf("Mensagem decifrada:\n");
   

int mult,conta;
conta=0;
 
    int soma=0;    
    
    for (int k=0;k<tamanhoMensagem/2;k++){
        
    
    for (int i=0;i<2;i++){
        soma = 0;
        for (int j=0;j<2;j++){
            
            
            mult = matriz[i][j]*mensagemCifrada[j+conta];
            soma += mult;
        }
        
        printf("%c", soma);
        
        
    }
    conta +=2;
    }
    
    

}
