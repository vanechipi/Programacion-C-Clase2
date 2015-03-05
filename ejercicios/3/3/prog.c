/* Programa para leer mensajes del terminal y escribirlos */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char buf[5];

	snprintf(buf, 50, "Que tipo de error de memoria soy");
	printf("%s\n", buf);

	return 1;
}
