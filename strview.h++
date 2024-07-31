#ifndef R2D_STRVIEW_H
#define R2D_STRVIEW_H

struct str_view {
	char *data;
	size_t size;
};

char *get_char_pointer(str_view v);

#endif