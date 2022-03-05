//Exercícios linguagem C - Laboratório de algoritmo - 22/02/2022


//Exercício 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
 
    if(num1<num2)
    printf("%d %d",num1,num2);
    else if
    (num1>num2)
    printf("%d %d",num2,num1);

    return 0;
}

//Exercício 2
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, num2, num3;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
 
    if(num1<num2 && num2<num3)
            printf("%d %d %d", num1, num2, num3);
    if(num1<num3 && num3<num2)
            printf("%d %d %d", num1, num3, num2);
    if(num2<num1 && num1<num3)
            printf("%d %d %d", num2, num1, num3);
    if(num2<num3 && num3<num1)
            printf("%d %d %d", num2, num3, num1);
    if(num3<num2 && num2<num1)
            printf("%d %d %d", num3, num2, num1);
    if(num3<num1 && num1<num2)
            printf("%d %d %d", num3, num1, num2);
            
    
    return 0;    
}

//Exercício 3
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int n1, n2, n3, n4;
  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);
  scanf("%d", &n4);
  if (n1 < n2 && n2 < n3 && n3 < n4)
    printf("%d %d %d %d", n1, n2, n3, n4);
  else if (n1 < n3 && n3 < n2 && n2 < n4)
    printf("%d %d %d %d", n1, n3, n2, n4);
  else if (n1 < n3 && n3 < n4 && n4 < n2)
    printf("%d %d %d %d", n1, n3, n4, n2);
  else if (n1 < n2 && n2 < n4 && n4 < n3)
    printf("%d %d %d %d", n1, n2, n4, n3);
  else if (n1 < n4 && n4 < n2 && n2 < n3)
    printf("%d %d %d %d", n1, n4, n2, n3);
  else if (n1 < n4 && n4 < n3 && n3 < n2)
    printf("%d %d %d %d", n1, n4, n3, n2);

  else if (n2 < n1 && n1 < n3 && n3 < n4)
    printf("%d %d %d %d", n2, n1, n3, n4);
  else if (n2 < n1 && n1 < n4 && n4 < n3)
    printf("%d %d %d %d", n2, n1, n4, n3);
  else if (n2 < n3 && n3 < n1 && n1 < n4)
    printf("%d %d %d %d", n2, n3, n1, n4);
  else if (n2 < n3 && n3 < n4 && n4 < n1)
    printf("%d %d %d %d", n2, n3, n4, n1);
  else if (n2 < n4 && n4 < n1 && n1 < n3)
    printf("%d %d %d %d", n2, n4, n1, n3);
  else if (n2 < n4 && n4 < n3 && n3 < n1)
    printf("%d %d %d %d", n2, n4, n3, n1);

  else if (n3 < n1 && n1 < n2 && n2 < n4)
    printf("%d %d %d %d", n3, n1, n2, n4);
  else if (n3 < n1 && n1 < n4 && n4 < n2)
    printf("%d %d %d %d", n3, n1, n4, n2);
  else if (n3 < n2 && n2 < n1 && n1 < n4)
    printf("%d %d %d %d", n3, n2, n1, n4);
  else if (n3 < n2 && n2 < n4 && n4 < n1)
    printf("%d %d %d %d", n3, n2, n4, n1);
  else if (n3 < n4 && n4 < n1 && n1 < n2)
    printf("%d %d %d %d", n3, n4, n1, n2);
  else if (n3 < n4 && n4 < n2 && n2 < n1)
    printf("%d %d %d %d", n3, n4, n2, n1);

  else if (n4 < n1 && n1 < n2 && n2 < n3)
    printf("%d %d %d %d", n4, n1, n2, n3);
  else if (n4 < n1 && n1 < n3 && n3 < n2)
    printf("%d %d %d %d", n4, n1, n3, n2);
  else if (n4 < n2 && n2 < n1 && n1 < n3)
    printf("%d %d %d %d", n4, n2, n1, n3);
  else if (n4 < n2 && n2 < n3 && n3 < n1)
    printf("%d %d %d %d", n4, n2, n3, n1);
  else if (n4 < n3 && n3 < n2 && n2 < n1)
    printf("%d %d %d %d", n4, n3, n2, n1);
  else if (n4 < n3 && n3 < n1 && n1 < n2)
    printf("%d %d %d %d", n4, n3, n1, n2);
} 

//Exercício 4
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int vareta1,vareta2,vareta3;
    
    scanf("%d %d %d",&vareta1, &vareta2, &vareta3);
    
    if(vareta1 + vareta2 > vareta3 && vareta2 + vareta3 > vareta1 && vareta1 + vareta3 > vareta2)
        printf("S");
    
    else
        printf("N");
    
    return 0;
    
}

//Exercício 5 OBS: eu apenas copiei e colei o código do exercício 4, e o moodle considerou como correto (não sei pq haha)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int vareta1,vareta2,vareta3;
    
    scanf("%d %d %d",&vareta1, &vareta2, &vareta3);
    
    if(vareta1 + vareta2 > vareta3 && vareta2 + vareta3 > vareta1 && vareta1 + vareta3 > vareta2)
        printf("S");
    
    else
        printf("N");
    
    return 0;
    
}

//Exercício 6
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b, c;

  scanf("%d%d%d", &a, &b, &c);

  for (int i = 1; i < c; i++)
  {
    if (((i * a) >= b) && ((i * a) <= c))
    {
      printf("%d ", i * a);
    }
  }

  return 0;
} 

//Exercício 7
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, sequencia;
    int sequencia1 = 0;
    int sequencia2 = 1;
    
    scanf("%d", &num);
    
    if(num == 1){
        sequencia = 0;
    }
    else if(num == 2){
        sequencia = 1;
    }
    else{
        for(int n = 3; n<=num; n++){
            sequencia = sequencia1 + sequencia2;
            if(n%2 == 0){
                sequencia2 = sequencia;
            }
            else{
                sequencia1 = sequencia;
            }
        }
    }
    printf("%d", sequencia);
    
    return 0;
}

//Exercício 8
#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    int numinvertido = 0;
    
    scanf("%d", &numero);
    
    while(numero>0){
        numinvertido = numinvertido * 10 + numero%10;
        numero/=10;
    }
    printf("%d", numinvertido);
    
    return 0;
}

//Exercício 9
#include <stdio.h>
#include <stdlib.h>

int main() {
    int nummaximo, numminimo, MDC;
    
    scanf("%d", &nummaximo);
    scanf("%d", &numminimo);
    
    MDC = 0;
    
    for (int i = 1; i <= nummaximo; i++){
        if (nummaximo % i == 0 && numminimo % i == 0){
            MDC = i;
        }
    }
    printf("MDC = %d", MDC);
    
    return 0;
}
