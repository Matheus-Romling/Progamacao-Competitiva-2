#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool ehprimo[1000001];
//como a solução da questão da questão é basicamente todos os quadrados de primos
//fica mais fácil se encontrar os primos até a raiz de n
void primos(){
    ehprimo[0] = false;
    ehprimo[1] = false;
    for (int i=2; i<=1000000; i++){
        ehprimo[i] = true;
    }
    for (long long p=2; p*p<=1000000; p++){
        if (ehprimo[p]){
            for (long long i=p*p; i<=1000000; i+=p){
                ehprimo[i] = false;
            }
        }
    }
}
bool teste(long long vet){
    if (vet==1) return false;
    long long raiz = sqrt(vet);
    if (raiz * raiz == vet && ehprimo[raiz]){
        return true;
    }
    return false;
}
int main(){
    primos();
    int n;
    scanf("%d",&n);
    long long *vetor= (long long *) malloc(n * sizeof(long long));
    
    for(int i=0; i<n; i++){
        scanf("%lld", &vetor[i]);
    }
    for(int i = 0; i < n; i++){
        if(teste(vetor[i])==true){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    free(vetor);
    return 0;
}
