#include <stdio.h>
#define MAX 4

int maior(int v[MAX]){
    int oMaior = v[0];
    for(int i = 1; i < MAX; i++ ){
        if(v[i] > oMaior)
            oMaior = v[i];
    }
    return oMaior;
}

int main(){
    int vet[MAX];
    for(int i=0; i<MAX; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    for(int i=0; i<MAX; i++){
        printf("%d ", vet[i]);
    }

    printf("\nO maior valor eh %d", maior(vet));

}

