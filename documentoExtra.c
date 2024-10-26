#include <stdio.h>
#include <stdlib.h>

int main(){
int n = 0;
  
  printf("Introduce el número para saber si es par o impar: ");
    scanf("%d\n", &n);
  
    if (n % 2 == 0 ){
    printf ("El número %d es un número par\n", n);

}else printf("Es un número impar");

return 0;
}
