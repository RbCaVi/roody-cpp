#ifndef R2D_SMP_H
#define R2D_SMP_H

#include "strview.h++"

typedef struct smp smp;

smp *smp_parse(char *data);

typedef enum {
	SMP_STRING,
	SMP_ARRAY,
	SMP_OBJECT,
} smp_type;

smp_type smp_get_type(smp *smp);

// 3 types
// string, array, object

// can be used on all smps?
str_view smp_get_str(smp *smp);

// will error somehow on invalid input
// probably NULL str_view
str_view smp_get_idx(smp *smp, int i);
str_view smp_get_key(smp *smp, char *key);

#endif