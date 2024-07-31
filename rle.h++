#ifndef R2D_RLE_H
#define R2D_RLE_H

#include "strview.h++"

char *rle_decode(str_view *s);
char *rle_encode(char *s);

#endif