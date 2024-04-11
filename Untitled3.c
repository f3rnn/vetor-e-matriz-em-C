#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define DISCIPLINAS 3
#define NOTAS 3
int main(){
	setlocale(LC_ALL,"");
	
	//variaveis
	char disciplinas[DISCIPLINAS][200];
	float notas[NOTAS][DISCIPLINAS], media[DISCIPLINAS], soma=0, pesos[NOTAS], notasPonderadas[NOTAS];
	int i,j;
	
	//pedindo dados
	for(i=0;i<DISCIPLINAS;i++){
		printf("digite o nome da %dª disciplina: ",i+1);
		gets(disciplinas[i]);
		fflush(stdin);
			for(j=0;j<NOTAS;j++){
				do{
					printf("informe a %dª nota: ",j+1);
					scanf("%f",&notas[i][j]);
					printf("informe o peso da nota: ");
					scanf("%f",&pesos[j]);
					fflush(stdin);
					
					notasPonderadas[i] = notas[i][j]*pesos[j];
					notasPonderadas[i] = notas[i][j]*pesos[j];
					notasPonderadas[i] = notas[i][j]*pesos[j];
					soma+=notasPonderadas[i];
				}while(notas[i][j]<0 || notas[i][j]>10);
			}
		media[i]=soma/10;
		soma=0;
	}
	
	//exibindo
	for(i=0;i<DISCIPLINAS;i++){
		printf("%dª disciplina: %s\n",i+1,disciplinas[i]);
		for(j=0;j<NOTAS;j++){
			printf("%dª nota: %.1f\n",j+1,notas[i][j]);
		}
		printf("média: %.1f\n",media[i]);
	}
}
