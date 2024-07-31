#ifndef R2D_STRVIEW_H
#define R2D_STRVIEW_H

#include <cstddef>

typedef struct {
	const char *data;
	size_t size;
} str_view;

char *get_char_pointer(str_view v);

#endif