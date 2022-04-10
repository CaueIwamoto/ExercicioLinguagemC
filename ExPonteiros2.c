//Segundo exercício de ponteiros laboratório do dia 5/04/2022.

//Exercício 1
struct pessoa
{
float peso;
float altura;
int idade
  };
stuct pessoa Maria;

//Exercício 2
#include <stdio.h>
#include <stdlib.h>

struct{
int ano;
char mes[10];
int dia;
}Nasc;

int main(void){
  printf("Digite o dia:\n");
  scanf("%d", &Nasc.dia);
  
  printf("Escreva o mes:\n");
  scanf("%s", Nasc.mes);
  
  printf("Digite o ano:\n");
  scanf("%d", &Nasc.ano);
 
 printf("Data: %d/%s/%d\n", Nasc.dia, Nasc.mes, Nasc.ano);
}


//Exercício 3
#include <stdio.h>
#include <stdlib.h>


struct{
double p1;
double p2;
double p3;
}p;

int main(void){
  scanf("%lf", &p.p1);
  scanf("%lf", &p.p2);
  scanf("%lf", &p.p3);
  if(p.p1>p.p2&&p.p2>p.p3){
    printf("%.4lf\n%.4lf\n%.4lf", p.p3,p.p2,p.p1);
  }
  if(p.p1>p.p3 && p.p3>p.p2){
    printf("%.4lf\n%.4lf\n%.4lf", p.p2,p.p3,p.p1);
  }
  if(p.p2>p.p1 && p.p1>p.p3){
    printf("%.4lf\n%.4lf\n%.4lf", p.p3,p.p1,p.p2);
  }
  if(p.p2>p.p3 && p.p3>p.p1){
    printf("%.4lf\n%.4lf\n%.4lf", p.p1,p.p3,p.p2);
  }
  if(p.p3>p.p2 && p.p2>p.p1){
    printf("%.4lf\n%.4lf\n%.4lf", p.p1,p.p2,p.p3);
  }
  if(p.p3>p.p1 &&p.p1>p.p2){
    printf("%.4lf\n%.4lf\n%.4lf", p.p2,p.p1,p.p3);
  }
}

//Exercício 4
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct pontos
{
  int x;
  int y;
} vetor;

int main(){
  int n, i;
  float soma = 0;
  scanf("%d", &n);
  struct pontos vetor [n];
  for(i=0;i<n;i++){
    scanf("%d", &vetor[i].x);
    scanf("%d", &vetor[i].y);
  }
  for (i=0;i<n;i++){
    if(i != n-1){
      soma+=sqrt((pow((vetor[i+1].x-vetor[i].x), 2)+pow((vetor [i+1].y-vetor[i].y), 2)));
    }
    else{
      soma+=sqrt((pow((vetor[0].x-vetor[n-1].x), 2)+pow((vetor [0].y-vetor[n-1].y),2)));
    }
    
  }

  float dist;
  dist = soma;
 printf("Perimetro: %.4lf\n", dist);
  }

//Exercício 5
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Ponto
{
	double R;
	double I;
};

void leiaPonto(struct Ponto *p)
{
    printf("Digite o valor da parte Real:\n");
	scanf("%lf", &( (*p).R ) );
    printf("Digite o valor da parte Imaginaria:\n");
	scanf("%lf", &( (*p).I )  );
	printf("%.4lf + (%.4lf)i\n", (*p).R, p->I);
}

	

int menu()
{
    puts("");
    puts("=============");
    puts("1 - Adicao   ");
    puts("2 - Multiplicacao  ");
    puts("3 - Divisao  ");
    puts("4 - Modulo  z1  ");
    puts("5 - Modulo  z2  ");
    puts("6 - Conjugado  z1  ");
    puts("7 - Conjugado  z2  ");
    puts("0 - Sair  ");
    printf("opcao => ");
    int op;
    scanf("%d", &op);

    return op;
}
void produto(struct Ponto a, struct Ponto b){
    printf("\nMultiplicacao\n");
    double partR = ((a.R)*(b.R)-(a.I)*(b.I));
    double partI = ((a.R)*(b.I)+(a.I)*(b.R));
    printf("Parte Real: %.4lf\n",partR);
    printf("Parte Imaginaria: %.4lf\n", partI);
    printf("%.4lf + (%.4lf)i",partR, partI);
}

void soma(struct Ponto a, struct Ponto b){
    printf("\nAdicao\n");
    double partR = ((a.R)+(b.R));
    double partI = ((a.I)+(b.I));
    printf("Parte Real: %.4lf\n", partR);
    printf("Parte Imaginaria: %.4lf\n", partI);
    printf("%.4lf + (%.4lf)i",partR, partI );
}

void quociente(struct Ponto a, struct Ponto b){
    double partR = ((a.R)*(b.R)+(a.I)*(b.I))/(pow((b.I),2)+pow((b.R),2));
    double partI = ((a.I)*(b.R)-(a.R)*(b.I))/(pow((b.I),2)+pow((b.R),2));
    printf("Parte Real: %.4lf\n",partR);
    printf("Parte Imaginaria: %.4lf\n",partI );
    printf("%.4lf + (%.4lf)i", partR, partI );
}
void modulo(struct Ponto p){
    printf("\nModulo \n");
	printf("O modulo de %.4lf + (%.4lf)i eh %.4lf ", p.R, p.I, sqrt(pow(p.R,2)+pow(p.I,2)));
}
void conjugado(struct Ponto p){
    printf("\nConjugado\n");
    printf("Parte Real: %.4lf\n", p.R);
    printf("Parte Imaginaria: %.4lf\n", -1*(p.I));
    printf("%.4lf + (%.4lf)i", p.R, -1*(p.I) );
}
int main(void)
{
	struct Ponto z1;
	struct Ponto z2;

	leiaPonto( &z1 );
	leiaPonto( &z2 );

    int op = menu();
    if(op == 1)
    {
        soma(z1, z2);
    }
    else if(op == 2)
    {
        produto(z1, z2);
    }
    else if(op == 3)
    {
        quociente(z1, z2);
    }
    else if(op == 4)
    {
        modulo(z1);
    }
    else if(op == 5)
    {
        modulo(z2);
    }
    else if(op == 6)
    {
        conjugado(z1);
    }
    else if(op == 7)
    {
        conjugado(z2);
    }

	return 0;
  }
