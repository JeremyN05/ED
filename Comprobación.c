#include <stdio.h>
#include <stdlib.h>

int main{
char caracter;

    printf("Introduzca el carácter para saber si es un número o una letra\n");
    scanf("%c", caracter);

    if (caracter >= 'A' | carater <= 'Z' | caracter >= 'a' | caracter <= '<' ){
      printf("El carácter %d es una letra\n", caracter);
    
    }if else (caracter >=0 | caracter <= 100){
      printf("El carácter %d es un número\n");
      
    }else printf("No es ni una letra ni un número");
  
  return 0;
}
