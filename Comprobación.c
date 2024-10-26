#include <stdio.h>
#include <stdlib.h>

int main(){
char caracter;

    printf("Introduzca el carácter para saber si es un número o una letra\n");
    scanf("%c", &caracter);

    if (caracter >= 'A' | caracter <= 'Z' | caracter >= 'a' | caracter <= '<' ){
      printf("El carácter %c es una letra\n", caracter);
    
    }else if (caracter >=0 | caracter <= 100){
      printf("El carácter %c es un número\n", caracter);
      
    }else printf("No es ni una letra ni un número");
  
  return 0;
}
