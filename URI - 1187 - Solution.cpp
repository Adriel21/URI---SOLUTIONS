//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Cear� / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int i, c;
	char z;
	double X[12][12], soma=0;
	
	cin >> z;
	
	for(i=0; i<12; i++)
		for(c=0; c<12; c++)
			cin >> X[i][c];
			
	switch(z){
		
		case 'S':
			for(i=0; i<5; i++)
				for(c=i+1; c<11-i; c++)
					soma += X[i][c];
					
			printf("%.1f\n", soma);
			break;
		
		case 'M':
			for(i=0; i<5; i++)
				for(c=i+1; c<11-i; c++)
					soma += X[i][c];
	
			printf("%.1f\n", soma/30);
			break;
			
	}
	
	return 0;
	
}
