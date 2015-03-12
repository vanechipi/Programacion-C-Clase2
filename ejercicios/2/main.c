#include "gestor_tarea.h"
#include <assert.h>

int main(void)
{
	struct tarea *t1, *t2, *t3;
	struct gestor_tarea *gt;
	char info[10000];

	t1 =  tarea_alloc();

	tarea_set_str(t1, NOMBRE_TAREA, "Tarea 1");
	tarea_set_str(t1, DESC_TAREA, "Abrir navegador");
	tarea_set_str(t1, NOMBRE_USUARIO_T, "Vanessa");
	tarea_set_u32(t1, TAREA_ID, 1);
	tarea_set_u32(t1, T_PRIORIDAD, 6);

	assert(strcmp(tarea_get_str(t1, NOMBRE_TAREA),"Tarea 1") == 0);
	assert(strcmp(tarea_get_str(t1, DESC_TAREA), "Abrir navegador") == 0);
	assert(strcmp(tarea_get_str(t1, NOMBRE_USUARIO_T), "Vanessa") == 0);
	assert(tarea_get_u32(t1, TAREA_ID) == 1);
	assert(tarea_get_u32(t1, T_PRIORIDAD) == 6);

	t2 = tarea_alloc();

	tarea_set_str(t2, NOMBRE_TAREA, "Tarea 2");
	tarea_set_str(t2, DESC_TAREA, "cerrar navegador");
	tarea_set_str(t2, NOMBRE_USUARIO_T, "Chipi");
	tarea_set_u32(t2, TAREA_ID, 2);
	tarea_set_u32(t2, T_PRIORIDAD, 8);

	assert(strcmp(tarea_get_str(t2, NOMBRE_TAREA),"Tarea 2") == 0);
	assert(strcmp(tarea_get_str(t2, DESC_TAREA), "cerrar navegador") == 0);
	assert(strcmp(tarea_get_str(t2, NOMBRE_USUARIO_T), "Chipi") == 0);
	assert(tarea_get_u32(t2, TAREA_ID) == 2);
	assert(tarea_get_u32(t2, T_PRIORIDAD) == 8);

	t3 = tarea_alloc();

        tarea_set_str(t3, NOMBRE_TAREA, "Tarea 3");
        tarea_set_str(t3, DESC_TAREA, "mostrar imagen");
        tarea_set_str(t3, NOMBRE_USUARIO_T, "Chipi");
        tarea_set_u32(t3, TAREA_ID, 3);
        tarea_set_u32(t3, T_PRIORIDAD, 7);

        assert(strcmp(tarea_get_str(t3, NOMBRE_TAREA),"Tarea 3") == 0);
	assert(strcmp(tarea_get_str(t3, DESC_TAREA), "mostrar imagen") == 0);
	assert(strcmp(tarea_get_str(t3, NOMBRE_USUARIO_T), "Chipi") == 0);
	assert(tarea_get_u32(t3, TAREA_ID) == 3);
	assert(tarea_get_u32(t3, T_PRIORIDAD) == 7);


	gt = gestor_tareas_alloc();

	gestor_tareas_set_tarea(gt, t1);
	gestor_tareas_set_tarea(gt, t2);
	gestor_tareas_set_tarea(gt, t3);

	gestor_tareas_unset_tarea(gt, 0);

	gestor_tareas_snprintf(info, sizeof(info), gt);
	printf("%s\n", info);

	gestor_tareas_free(gt);
	return 0;
}
