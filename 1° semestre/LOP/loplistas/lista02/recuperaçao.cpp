#include <stdio.h>
int main(){
    int fuma, bebe, drogas;
    int vicios = 0;

    printf("Você fuma? (1 = sim, 0 = não)\n");
    scanf("%d", &fuma);

    printf("Você bebe? (1 = sim, 0 = não)\n");
    scanf("%d", &bebe);

    printf("Você usa drogas? (1 = sim, 0 = não)\n");
    scanf("%d", &drogas);

    vicios = fuma + bebe + drogas;

    if (vicios == 0) {
        printf("Apto\n");
    }else if (vicios == 1) {
        printf("Reavaliado\n");
    }else {
        printf("Inapto\n");
    }

    return 0;
}