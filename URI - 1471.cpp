/*Autor: Adriel Araujo
-Estudante de Ciencias da Computação UECE 2016.2 - 1422340
Author: Adriel Araujo
-Student of Computer Science in UECE 2016.2 - 1422340*/

#include <stdio.h>

int main(void) {
	int N, R, i, j, aux, cont=0;
	
	while(scanf("%d %d", &N, &R)!=EOF){
	
		int vetor[10000], vet[10000];
			
		for(i=0; i<N; i++){
			vetor[i]= i+1;
		}
		for(i=0; i<R; i++){
			scanf("%d", &vet[i]);
		}
		if(N==R){
			printf("*\n");
		}
		else{
			
	    	for(i=0; i<N; i++){
				for(j=0; j<R; j++){
					if(vetor[i]==vet[j]){
						cont++;
					}
				}
					
				if(cont==0){
					printf("%d ", vetor[i]);
				}
				cont=0;
			}
			printf("\n");
		}
	}
return 0;
}
