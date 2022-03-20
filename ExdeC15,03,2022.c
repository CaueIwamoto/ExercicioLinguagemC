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
#include <stdio.h>
#include <math.h>

int maior(double[], int);

int main(){
  int a;
  scanf("%d", &a);
  
  double taxas[a];
  for (int i=0; i< a; i++){
    scanf("%lf", &taxas[i]);
    }
  printf("%d", maior(taxas, a));
  
}

int maior(double taxas[], int a){
  int rol;
  int valor = taxas[0];
  
  for(int i=0; i<a;i++){
    if (taxas[i]>valor){
      valor = taxas[i];
      rol = i;
      
    }
  }
  
  return rol;
  
}

//Exercício 3
#include <stdio.h>
#include <math.h>

int invert(int[],int);

int main(){
  int a;
  scanf("%d", &a);
  
  int v[a];
  for (int i=0; i<a; i++){
    scanf("%d", &v[i]);
    }
  invert(v, a);

}

int invert(int v[], int a){
  for (int i=a-1; i>=0; i--){
    printf("%d ", v[i]);
    }
  
  return 0;
  
}

//Exercício 4
#include <stdio.h>
#include <math.h>

double calculo(double[], int);
double calculo2(double[], int);

int main(){
  int n;
  scanf("%d", &n);
  
  double v[n];
  for (int i=0; i<n; i++){
    scanf("%lf", &v[i]);
    }
  
  printf("Desvio Padrao Amostral = %.2lf\n",calculo2(v, n));
  printf("Variancia Amostral = %.2lf", calculo(v, n));
  
}

double calculo(double v[], int n){
  double soma=0;
  double soma2=0;
  for (int i=0;i<=n;i++){
    soma+=v[i];
    soma2=soma2+(v[i]*v[i]); 
  }
  double vari=(soma2-(soma*soma)/n)/(n-1);
 

  return vari;
}
double calculo2(double v[], int n){
  double soma=0;
  double soma2=0;
  
  for (int i=0;i<=n;i++){
    soma+=v[i];
    soma2=soma2+(v[i]*v[i]); 
  }
  
  double vari=(soma2-(soma*soma)/n)/(n-1);
  double desv=sqrt(vari);

  return desv;

}

//Exercício 5
#include <math.h>
#include <stdio.h>

double calculo(double[],int);

int main(){
  int a;
  
  scanf("%d", &a);
  double v[a];
  for (int i=0; i<a; i++){
    scanf("%lf", &v[i]);
    }
  
  printf("Modulo = %.2f", calculo(v, a));

}

double calculo(double v[], int a){
  double b=0;
  
  for (int i=0; i<a; i++){
    double a=v[i]*v[i];
    b+=a;
    }
  
  return sqrt(b);
  
}

//Exercício 6
#include <math.h>
#include <stdio.h>

double calculo(double[], double[], int);

int main(){
  int a;
  scanf("%d", &a);
  
  double v1[a];
  for (int i=0; i<a; i++){
    scanf("%lf", &v1[i]);
    }
  
  double v2[a];
  for (int i=0; i<a; i++){
    scanf("%lf", &v2[i]);
    }
  
  printf("Produto Escalar = %.2lf", calculo(v1, v2, a));

}

double calculo(double v1[],double v2[], int a){
  double b = 0;
  
  for (int i=0; i<a; i++){
    double a=v1[i]*v2[i];
    b+=a;
    }
  
  return b;
  
}

//Exercício 7
#include <stdio.h>
#include <math.h>

double graus(double);

#define M_PI  3.14159265358979323846

int main(){
  double angulo;
  
  printf("Digite o angulo em radianos:\n");
  scanf("%lf", &angulo);
  
  printf("O angulo de %lf radianos equivale a %.4lf graus.", angulo, graus(angulo));
}

double graus(double angulo){
  double a = (angulo*180)/M_PI;
  
  return a;
}

//Exercício 8
#include <math.h>
#include <stdio.h>
#define PI 3.14159265358979323846

double calc(double[], double[],int );

int main(){
  int lim;
  scanf("%d",&lim);
  double v1[lim];
  for (int i=0; i<lim; i++){
    scanf("%lf", &v1[i]);
    }
  double v2[lim];
  for (int i=0; i<lim; i++){
    scanf("%lf", &v2[i]);
    }
  printf("Angulo entre os vetores: %.4lf graus.", calc(v1, v2, lim));

}

double calc(double v1[],double v2[], int lim){
  double b=0;
  for (int i=0; i<lim; i++){
    double a=v1[i]*v1[i];
    b+=a;
    }
  double c=sqrt(b);
  
  double d=0;
  for (int i=0; i<lim; i++){
    double a=v2[i]*v2[i];
    d+=a;
    }
  double e=sqrt(d);
  
  double f=0;
  for (int i=0; i<lim; i++){
    double a=v1[i]*v2[i];
    f+=a;
    }
  
  
  double h=f/(e*c);
  double x=acos(h)*180/PI;
  return x;
  
}

//Exercício 9
#include <stdio.h>
#include <math.h>

double calculo(double[], double[],int);

int main(){
  int nimb=3;
  double v1[nimb];
  for (int i=0; i<nimb; i++){
    scanf("%lf", &v1[i]);
    }
  
  double v2[nimb];
  for (int i=0; i<nimb; i++){
    scanf("%lf", &v2[i]);
    }
  
  calculo(v1, v2, nimb);

}

double calculo(double v1[], double v2[], int nimb){
  double a= (v1[1]*v2[2] - v1[2]*v2[1]);
  double b= (v1[2]*v2[0] - v1[0]*v2[2]);
  double c= (v1[0]*v2[1] - v1[1]*v2[0]);
  
  printf("Produto Vetorial = (%.2lf, %.2lf, %.2lf)", a, b, c);
  
  return 0;
  
}

//Exercício 10
#include <stdio.h>
#include <math.h>

int main()
{   
    int n,i,j;
    double menor=10, maior, vari;
    scanf("%d", &n);
    double x[n], y[n];
    for(i =0; i<n;i++){
        scanf("%lf", &x[i]);
        }
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &y[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j< n;j++){
            vari = sqrt(pow((x[i]-y[j]),2));
            if (vari>maior){
                maior = vari;
            }
        }
    }

    for (i = 0; i < n; i++){
        for (j = 0; j< n;j++){
            vari = sqrt(pow((x[i]-y[j]),2));
            
            if (vari<menor){
                menor = vari;
                
            }
        }
    }
    printf("Menor Distancia: %.2lf\n", menor);
    printf("Maior Distancia: %.2lf", maior);

}

//Exercício 11
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   
    int n,i,j;
    double menor=10, maior,vari;
    scanf("%d", &n);
    double x[n], aux;
    for(i =0; i<n;i++){
        scanf("%lf", &x[i]);
        }
    for (i = 0; i < n; i++){
        for (j = i+1; j< n;j++){
            if (x[i]>x[j]){
                aux = x[i];
                x[i]=x[j];
                x[j]=aux;
            }
        }
    }
    for (i = 0; i < n; i++){
        for (j = 1; j< n;j++){
            vari = sqrt(pow((x[i]-x[j]),2));
            if (i!=j){
                if (vari<menor){
               
                    menor = sqrt(pow(x[i]-x[j],2));
                    
            }
                
            }
        }
    }
    for (i=0;i<n;i++){
        for (j=1;j<n;j++){
            if (sqrt(pow(x[i]-x[j],2))>maior){
                maior = sqrt(pow(x[i]-x[j],2));
                
            }
        }
    }
    printf("Menor Distancia: %.2lf\n", menor);
    printf("Maior Distancia: %.2lf", maior);

}

//Exercício 12
#include <math.h>
#include <stdio.h>

double calc(double[],int , double);

int main(){
  int lim;
  scanf("%d",&lim);
  double v1[lim];
  for (int i=0; i<lim; i++){
    scanf("%lf", &v1[i]);
    }
  double valor;
  scanf("%lf", &valor);
  printf("Busca: %0.lf", calc(v1, lim, valor));

}

double calc(double v1[], int lim, double valor){
  double b=-1;
  for (int i=0; i<lim; i++){
    if(v1[i]==valor){
      b=i;
    }
  }
  
  return b;
  
}



/* OBS: PEGUEI OS EXERCÍCIOS 9 ATÉ O 12 DO SCOPEL*/
/* OBS: PEGUEI OS EXERCÍCIOS 9 ATÉ O 12 DO SCOPEL*/
/* OBS: PEGUEI OS EXERCÍCIOS 9 ATÉ O 12 DO SCOPEL*/

