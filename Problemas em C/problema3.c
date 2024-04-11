#include <stdio.h>
#include <math.h>

//Sn = ((a0 + an)*n)/2

int somaPA(int a0,int k, int n){
    int count, aux, soma = 0;
    aux = a0 + k;
    for(int i = 0; i < n; i++){
            soma += aux;            
            count += 1;
    };
    
    return (soma/2);
}

int main(){
    int Sn, a0, k, n;

    printf("Digite o elemento base (1º elemento): ");
    scanf("%d", &a0);

    printf("Digite o n-ésimo termo: ");
    scanf("%d", &k);

    printf("Qual o numero de termos? ");
    scanf("%d", &n);

    Sn = somaPA(a0,k,n);
    printf("A soma da PA é: %d", Sn);

    return 0;

}