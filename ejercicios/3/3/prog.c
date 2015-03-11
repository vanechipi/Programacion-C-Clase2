/* Programa para leer mensajes del terminal y escribirlos */
/* No tenia memoria suficiente para poder guardar la cadena en el buffer, porque tenia definido poca memoria. Podría haber puesto 50 de tamaño pero quise 
poner el tamaño exacto */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char buf[33];

	snprintf(buf, 50, "Que tipo de error de memoria soy");
	printf("%s\n", buf);

	return 1;
}
