#ifndef IOHANDLE_H
# define IOHANDLE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

uint16 BUFFMAX = 4068;
uint16 WBUFFMAX = (BUFFMAX * 2);

char buffer[BUFFMAX] = {};
wchar_t wbuffer[WBUFFMAX] = {};

/* YOU LEFT HERE */

typedef struct _input_handle_S
{
  
} input_handle_t;

#endif /* NO IOHANDLE_H */

