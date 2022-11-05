#include <stdio.h>
#define MAX 10
int main(){
    float vet1[MAX], vet2[MAX];
    for(int i = 0; i < MAX; i++){
        printf("Digite um numero: ");
        scanf("%f", &vet1[i]);
    }

    for(int i = 0; i < MAX; i++){
        vet2[i] = vet1[i] * vet1[i];
    }

    for(int i = 0; i < MAX; i++){
        printf("%.1f ", vet2[i]);
    }
}
