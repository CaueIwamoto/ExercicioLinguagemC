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
    
}

//Exercício 6

//Exercício 7

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
}
