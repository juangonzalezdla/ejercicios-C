#include <stdio.h>

int main () {
  
  int usuario; 
  printf("¿Cuál es tu peso en KG en la tierra?: ");
  scanf("%d", &usuario); // Entrada del peso del usuario

  int peso = usuario; // Peso del usuario

  int planeta;
  printf("¿Cuál es tu planeta?,\n 1 es MARTE, 2 es JUPITER: ");
  scanf("%d", &planeta); // Entrada del planeta que haya elegido el usuario

  // Constantes de las gravedades de los planetas
  const float GRAVEDAD_TIERRA = 9.8;
  const float GRAVEDAD_MARTE = 3.7;
  const float GRAVEDAD_JUPITER = 24.8;

  int pesoFinal; // Variable peso final del usuario

  // Nombres de los planetas
  char nombreMarte[] = "Marte";  
  char nombreJupiter[] = "Jupiter";

  // Condicionales
  if (planeta == 1) {
    pesoFinal = peso * GRAVEDAD_MARTE / GRAVEDAD_TIERRA;
    printf("Tu peso en %s es igual a: %d KG.\n En %s pesas menos que en el planeta Tierra :)", nombreMarte, pesoFinal, nombreMarte);

  } else if (planeta == 2) {
    pesoFinal = peso * GRAVEDAD_JUPITER / GRAVEDAD_TIERRA;
    printf("Tu peso en %s es igual a: %d KG.\n En %s pesas más que en el planeta Tierra :)", nombreJupiter, pesoFinal, nombreJupiter);

  } else {
    printf("No elegiste ningún planeta, Lo siento :(");
  }
  return 0;
}