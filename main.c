#include <stdio.h>

int main(void) {
    printf("Bienvenue dans le projet calcul-c !\n");
    int a, b;

    printf("Entrez deux entiers : ");
    scanf("%d %d", &a, &b);

    printf("Somme = %d\n", a + b);
    return 0;
}
