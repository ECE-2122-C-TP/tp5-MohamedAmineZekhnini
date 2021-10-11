#include <stdio.h>
#include "cours.h"
Rationnel demanderNbRationnel(void) {
    /* Fonction qui demande de saisir un nombre rationnel
    * Paramètres :
    * - IN : vide
    * - OUT : le nombre rationnel saisi
    */
    Rationnel r;
    printf("Veuillez entrer le numerateur et le denominateur d'un nombre rationnel :\n");
    scanf("%d %d",&r.numerateur,&r.denominateur);
    return r;
}
void afficherNbRationnel(Rationnel r) {
    /* Fonction qui affiche le numerateur et le denominateur d'un nombre rationnel
    * Paramètres :
    * - IN : le nombre rationnel
    * - OUT : vide
    */
    printf("numerateur=%d denominateur=%d\n",r.numerateur ,r.denominateur);
}
Rationnel multiplierNbRationnel(Rationnel r1, Rationnel r2){
    /* Fonction qui multiplie 2 nombres rationnels
    * Paramètres :
    * - IN : les 2 nombres rationnels que l'on souhaite multiplier
    * - OUT : le produit des 2 nombres rationnels
    */
    Rationnel r3;
    r3.denominateur=r1.denominateur*r2.denominateur;
    r3.numerateur=r1.numerateur*r2.numerateur;
    return r3;
}
Rationnel additionnerNbRationnel(Rationnel r1, Rationnel r2) {
    /* Fonction qui additionne 2 nombres rationnels
    * Paramètres :
    * - IN : les 2 nombres rationnels que l'on souhaite additioner
    * - OUT : la somme des 2 nombres rationnels
    */
    Rationnel r3;
    r3.numerateur=r1.numerateur*r2.denominateur+r2.numerateur*r1.denominateur;
    r3.denominateur=r1.denominateur*r2.denominateur;
    return r3;
}


