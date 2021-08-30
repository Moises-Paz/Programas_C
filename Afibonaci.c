#include <stdio.h>
#include <stdlib.h>
int main(){
	int parada = 3;
	int atual = 0, anteriorDoAnt = 0, ant = 1;
	if(parada == 0){
		printf("%d", anteriorDoAnt);
	}
	else{
		if(parada == 1){
			printf("%d ", ant);
		}
		else{
			for(int n = 2; n <= parada; n++){
			atual = anteriorDoAnt + ant;
			anteriorDoAnt = ant;
			ant = atual;
			}
			printf("%d ", atual);
		}	
	}
	
	return 0;
}
