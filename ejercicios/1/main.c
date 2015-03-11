#include <stdio.h>
#include "tarea.h"
#include <assert.h>

int main(void)
{
	struct tarea *t1;
	char info[250];

	t1 = tarea_alloc();

	tarea_set_str(t1, NOMBRE_TAREA, "Tarea 1");
	tarea_set_str(t1, DESC_TAREA, "Abrir navegador");
	tarea_set_str(t1, DESC_TAREA, "cerrar navegador");
	tarea_set_str(t1, NOMBRE_USUARIO_T, "Vanessa");
	tarea_set_u32(t1, TAREA_ID, 1);
	tarea_set_u32(t1, T_PRIORIDAD, 6);

	tarea_snprintf(info, sizeof(info), t1);
	printf("%s\n", info);

	//printf("Nombre de la tarea %s\n", tarea_get_str(t1,NOMBRE_TAREA));

	assert(strcmp(tarea_get_str(t1, NOMBRE_TAREA),"Tarea 1") == 0);
	assert(strcmp(tarea_get_str(t1, DESC_TAREA), "cerrar navegador") == 0);
	assert(strcmp(tarea_get_str(t1, NOMBRE_USUARIO_T), "Vanessa") == 0);
	assert(tarea_get_u32(t1, TAREA_ID) == 1);
	assert(tarea_get_u32(t1, T_PRIORIDAD) == 6);

	tarea_free(t1);
	return 0;
}
