#ifndef __UTILS_H
#define __UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>
#include <string.h>
#include <slList.h>

typedef struct Byte20
{
	uint32_t magic;
	uint32_t version; // 1->Version 1
	uint32_t length; // total length of the Binary glTF, including header, content, and body, in bytes.
	uint32_t contentLength; // is the length, in bytes, of the glTF content. It must be greater than zero.
	uint32_t contentFormat; // 0->JSON
} Byte20;

Byte20 Byte20_init();

#endif