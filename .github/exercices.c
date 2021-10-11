#include <stdio.h>
#include "cours.h"
#include "exercices.h"
int Exercice1() {
    Rationnel r1 = demanderNbRationnel();
    afficherNbRationnel(r1);
    Rationnel r2 = demanderNbRationnel();
    Rationnel r3 = multiplierNbRationnel(r1, r2);
    printf("le produit des nombres rationnels r1 et r2 est %d/%d\n", r3.numerateur, r3.denominateur);
    Rationnel r4 = additionnerNbRationnel(r1, r2);
    printf("la somme des nombres rationnels r1 et r2 est %d/%d", r4.numerateur, r4.denominateur);
    return 0;
}
int Exercice2() {
    int Tableau[100];
    int nbEntiers= 0;
    printf("Entrez le nombre d'entiers à insérer dans le tableau:\n");
    scanf("%d",&nbEntiers);
    int i=0;
    int n=Tableau[0];
    for (i=0 ; i<nbEntiers ;i++) {
        printf("Entrer l'entier d'indice %d:\n",i);
        scanf("%d",&Tableau[i]);
        if (Tableau[i] > n) {
            n=Tableau[i];
        }
    }
    printf("le plus grand entier du tableau est %d",n);
    return 0;
}
int Exercice3() {
    int Tableau2[3][4];
    int i=0,j=0,t=0;
    int Tableau3[12];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Entrer l'entier d'indice [%d,%d]:\n", i, j);
            scanf("%d", &Tableau2[i][j]);
        }
    }
    for (i= 0; i < 3; i++) {
            for (j = 0; j < 4; j++) {
                Tableau3[t]=Tableau2[i][j];
                t=t+1;
            }
        }
    int s=0;
    for (s= 0; s < 12; s++) {
        printf("%d ",Tableau3[s]);
    }
    return 0;
}


