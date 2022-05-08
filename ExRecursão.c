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
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


void repete (int[],int,int,int);

int main(){
    int n;
    scanf("%d",&n);
    int vetor[n];
    int temp;
    for(int i=0;i<n;i++){
        scanf("%d",vetor+i);
        //printf("%d",vetor[i]);
    }
    
     for (int i = 0; i < n; i++) {     
         for (int j = i+1; j < n; j++) {     
          if(vetor[i] > vetor[j]) {    
              temp = vetor[i];    
              vetor[i] =vetor[j];    
              vetor[j] = temp;    
          }     
  }
     }
//for(int i=0;i<n;i++){
     //   printf("%d",vetor[i]);
    //}
    repete(vetor,0,n,1);
}
/*
void repete (int v[],int pos,int total){
    int auxiliar = v[pos];
    int conta=0;
if (pos>total-1){
        return;}
    
    for(int i=pos;i<total;i++){
        if (v[i]!=auxiliar){
            break;
        }
        conta+=1;
    }
    
    
    printf("%d aparece %d vez(es)\n",v[pos],conta);
   // printf("%d\n",pos);
   return repete(v,pos+conta,total);
    
}*/
void repete (int v[],int pos,int total, int conta){
    
if (pos>total-1){
        return;}
    
    if (v[pos]!=v[pos+1]){
printf("%d aparece %d vez(es)\n",v[pos],conta);
   // printf("%d\n",pos);
        return repete(v,pos+1,total,1);
    }
    
    
    
   return repete(v,pos+1,total,conta + 1);
    
}

//printf("%d aparece %d vez(es)\n", v[j-1], p);


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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int count = 0;
int res = 1;
int C(int n){
    if (count == n || n == 1){
        printf("%d ", n);
        return n;
    }else{
        count++;
        printf("%d ", n);
        if (n%2==0){
            n= n / 2;
        }else if(n%2==1){
            n= (3 *n) + 1;
        }
        return C(n);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    C(n);
}
