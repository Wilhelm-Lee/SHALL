#ifndef IOHANDLE_H
# define IOHANDLE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <uchar.h>

uint16_t BUFFMAX = 4068;
uint16_t WBUFFMAX = (BUFFMAX * 2);

uint16_t REDIRMAX = 512;

char buffer[BUFFMAX] = {};
char16_t wbuffer[WBUFFMAX] = {};

typedef enum _encoding_type_E
{
  /* Unit is "Byte" */
  NONE   = 0,  /* 0 Bit   */
  ASCII  = 1,  /* 8 Bits  */
  UTF_8  = 1,  /* 8 Bits  */
  UTF_16 = 2,  /* 16 Bits */
  UTF_32 = 4,  /* 32 Bits */
# ifdef __WIN32
  ALL    = 4   /* 32 Bits */
# elif defined __WIN64  /* __WIN32 */
  ALL    = 8   /* 64 Bits */
# else  /* __WIN64 */
# error Unsupported platform
#endif  /* ELSE */
}

typedef struct _IO_handle_S
{
  /* For inputting from multi-channels */
  FILE* _redirection[REDIRMAX];
  
  
} IO_handle_t;

#endif /* NO IOHANDLE_H */

