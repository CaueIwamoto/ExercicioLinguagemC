//Exercício de laboratório algoritmos no moodle do dia 3/05

//Exercício 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double Pot (int,int);
int main(){
  int num = 0;
  int exp = 0;
  
  scanf("%d", &num);
  scanf("%d", &exp);
  
  printf("%.4lf",Pot(num,exp)) ;
}

double Pot(int num,int exp){
  double valor=num;
  if(exp>0){
    while(exp-1>0){
    return num*(Pot(num,exp-1)) ;
  }
  }
  if(exp==1){
    return num;
  }
  else{
    for(int i=0;i>exp+1;i--){
        valor=(valor*num);        
    }
    
    return 1/valor;
    }
    
  return 1; 
}

//Exercício 2


//Exercício 3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double x=0;
double valor=0;

double sh(int);

int main(void) {
  int n;
  scanf("%d", &n);
  printf("%.4lf",sh(n));
}
double sh(int n){
  if(x==n){
    return valor;
  }
  else{
    x++;
    valor+=1/x;
    return sh(n);
  }
}

//Exercício 4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int count=0;
double valor=2;

double f(int );

int main(void) {
  printf("Digite o numero de discos:\n");
  int n;
  scanf("%d", &n);
  printf("Numero de movimentos com %d discos: %.0lf.",n,f(n));
}

double f(int n){
  if(count==n){
    return (valor/2)-1;
  }
  else{
    count++;
    valor=valor*2;
    return f(n);
  }
  return 1;
}

//Exercício 5
