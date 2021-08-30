#include <stdio.h>
#include <stdlib.h>
int main(void){
	float nota[3], MA;
	printf("Informe as notas\n");
	for(int n=0; n<3; n++){
		printf("Nota %d: ",n+1);
		scanf("%f",&nota[n]);
		if(n == 2){
			printf("Media dos exercicios: ");
    		scanf("%f",&nota[n+1]);
		}
	}
	MA = (nota[0] + (nota[1]*2) + (nota[2]*3) + nota[3])/7;
	if(MA >= 9)
		printf("A\n");
	else 
		if(MA<9 && MA>=7.5)
			printf("B\n");
	    else 
			if(MA<7.5 && MA>=6)
	    		printf("C\n");
		    else 
				if(MA<6 && MA>=4)
					printf("D\n");		    	
			    else 
					if(MA<4)
						printf("E\n");
	system("pause");
	return 0;
}
