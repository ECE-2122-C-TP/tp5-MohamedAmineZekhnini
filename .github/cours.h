#ifndef TP5_COURS_H
#define TP5_COURS_H
typedef struct Point {
    int numerateur,denominateur;
} Rationnel;
Rationnel demanderNbRationnel(void);
void afficherNbRationnel(Rationnel r);
Rationnel multiplierNbRationnel(Rationnel r1, Rationnel r2);
Rationnel additionnerNbRationnel(Rationnel r1, Rationnel r2);
#endif //TP5_COURS_H
