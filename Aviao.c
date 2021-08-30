#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
typedef struct aviao{
	char modeloDoAviao[100];
	int  codigo;
	char destino[100];
}aviao;

typedef struct no{
	aviao informacoes;
	struct no *prox;
}no;

typedef struct fila{
	no *head;
	no *tail;
}fila;

fila* criaFila(fila *f){
	f = (fila*) malloc(sizeof(fila));
	f->head = NULL;
	f->tail = NULL;
	return f;
}
void adicionarInfo(no *novo){
	if(novo){
		system("cls");
		puts("Informe o Codigo do aviao: ");
		scanf(" %d", &novo->informacoes.codigo);
		fflush(stdin);
		puts("Infome o destino: ");
		gets(novo->informacoes.destino);
		fflush(stdin);
		puts("informe o modelo da aeronave: ");
		gets(novo->informacoes.modeloDoAviao);
	}
}
void mostraFila(fila *f){
	if(f){
		if(f->head && f->tail){
			int contador=1;
			no *aux = NULL;
			aux = f->head;
			system("cls");
			puts("AVIOES NA FILA: ");
			while(aux){
				puts("");
				printf("Aviao %d:\n", contador);
				printf("Codigo do aviao: %d\n", aux->informacoes.codigo);
				printf("Destino: %s\n", aux->informacoes.destino);
				printf("Modelo: %s\n", aux->informacoes.modeloDoAviao);
				aux = aux->prox;
				contador +=1;
			}
			system("pause");
		}
		else{
			puts("Nao ha avioes na fila!");
			sleep(1);
		} 
	}
	else{
		puts("Nao ha fila criada!");
		sleep(1);
	} 
}
void listarAvioes(fila *f){
	if(f){
		if(f->head && f->tail){
			int contador = 0;
			no *aux = NULL;
			aux = f->head;
			while(aux){
				contador +=1;
				aux = aux->prox;
			}
			system("cls");
			printf("AVIOES NA FILA: %d\n", contador);
			system("pause");
		}
		else{
			puts("Nao ha avioes na fila!");
			sleep(1);
		}
	}
	else{
		puts("Nao ha fila criada!");
		sleep(1);
	} 
}
void listarPrimeiro(fila *f){
	if(f){
		if(f->head && f->tail){
			system("cls");
			puts("");
			printf("Codigo do aviao: %d\n", f->head->informacoes.codigo);
			printf("Destino: %s\n", f->head->informacoes.destino);
			printf("Modelo: %s\n", f->head->informacoes.modeloDoAviao);
			system("pause");
		}
		else{
			puts("Nao ha avioes na fila!");
			sleep(1);
		}
	}
	else{
		puts("Nao ha fila criada!");
		sleep(1);
	} 
}
void confirma(int n){
	system("cls");
	switch (n){
		case 1:
			puts("ADICIONADO COM SUCESSO!");
			sleep(1);
			break;
		case 2:
			puts("NAO FOI POSSIVEL ADICIONAR");
			sleep(1);
			break;
		case 3:
			puts("AVIAO LIBERADO!");
			sleep(1);
			break;
	}
}
fila* enfileirar(fila *f){
	if(f){
		no *novo = NULL;
		novo = (no *) malloc(sizeof(no));
		if(novo){
			adicionarInfo(novo);
			if((f->head==NULL) && (f->tail==NULL)){
				novo->prox = NULL;
				f->head = novo;
				f->tail = novo;
			}
			else{
				novo->prox = NULL;
				f->tail->prox = novo;
				f->tail = novo;
			}
			confirma(1);
			return f;
		}
		else{
			confirma(2);
			return NULL;
		} 	
	}else return NULL;
}
fila* desenfileirar(fila *f){
	if(f){
		if(f->head && f->tail){
			if(f->head == f->tail) f->tail = NULL;
			no *aux = NULL;
			aux = f->head;
			f->head = aux->prox;
			free(aux);
			aux = NULL;
			confirma(3);
			return f;
		}
	}
}
void finaliza(void){
	char fim[10];
	system("cls");
	puts("Deseja mesmo sair?\ns - sim\nn - nao");
	fflush(stdin);
	gets(fim);
	if(fim[0] =='s' || fim[0] == 'S' || fim == "sim" ||fim == "Sim" || fim == "SIM"){
		system("cls");
		exit(0);
	}
	else{
		system("cls");
		puts("Opcao invalida\nRetornando ao menu principal");
		sleep(1);	
	} 
}
int main(){
	int opcao;
	fila *filaDeAviao = NULL;
	filaDeAviao = criaFila(filaDeAviao);
	while(1){
		system("cls");
		puts("MENU OPCOES: ");
		puts("1 - ADICIONAR A FILA DE ESPERA");
		puts("2 - ALTORIZAR DECOLAGEM");
		puts("3 - LISTAR NUMERO DE AVIOES NA FILA");
		puts("4 - MOSTRAR PRIMEIRO DA FILA");
		puts("5 - MOSTRAR NUMERO DE AVIOES NA FILA");
		puts("6 - SAIR");
		fflush(stdin);
		scanf(" %d", &opcao);
		switch (opcao){
			case 1:
				filaDeAviao = enfileirar(filaDeAviao);
				break;
			case 2:
				filaDeAviao = desenfileirar(filaDeAviao);
				break;
			case 3:
				listarAvioes(filaDeAviao);
				break;
			case 4:
				listarPrimeiro(filaDeAviao);
				break;
			case 5:
				mostraFila(filaDeAviao);
				break;
			case 6:
				finaliza();
				break;
			default:
				puts("Opcao invalida!");
				sleep(1);
		}
	}
	return 0;	
}
