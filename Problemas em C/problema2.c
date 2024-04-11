#include <stdio.h>

int main(){
    int a0, r, n, k,i, aux;

    printf("Digite o elemento base (1º elemento): ");
    scanf("%d", &a0);

    printf("Qual a razão dos valores: ");
    scanf("%d", &r);

    printf("Digite o n-ésimo termo: ");
    scanf("%d", &k);

   
    aux = a0;
    for(aux = a0; aux < k; aux += r){
        
        printf("%d ", aux);
    };

    return 0;

}