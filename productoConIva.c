#include <stdio.h>

int main() {
  
  int precio, iva, precioFinal;
  char nombre[50];

  printf("Ingresa el nombre del producto: ");
  gets(nombre);
  printf("Ingresa el precio del producto: ");
  scanf("%d", &precio);

  iva = precio * 0.15;
  precioFinal = precio + iva;
  
  printf("\nEl producto %s tiene un precio final de $%d.", nombre, precioFinal);

  return 0;
}