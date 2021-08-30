#include <stdlib.h> 
#include <stdio.h> 
#include <math.h> 
#include "ponto.h"
struct ponto {
 float x;
 float y;
};

Ponto* cria (float x, float y) {
 Ponto* p = (Ponto*) malloc(sizeof(Ponto));
 if (p == NULL) {
 printf("Memória insuficiente!\n");
 exit(1);
 }
 p->x = x;
 p->y = y;
 return p;
}

void libera (Ponto* p) {
 free(p);
}

float distancia (Ponto* p1, Ponto* p2) {
 float dx = p2->x – p1->x;
 float dy = p2->y – p1->y;
 return sqrt(dx*dx + dy*dy);
}
