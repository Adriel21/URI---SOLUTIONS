//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Cear� / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	long double X;
	
    char s[120];
    
    scanf("%LE", &X);
    
    sprintf(s,"%LE", X);
    
    if(s[0] != '-') printf("+");
    
    printf("%.4LE\n", X);
    
    return 0;
}
