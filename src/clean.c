//
//  clean.c
//  AnsiLove/C
//
//  Copyright (c) 2011-2018 Stefan Vogt, Brian Cassidy, and Frederic Cambus.
//  All rights reserved.
//
//  This source code is licensed under the BSD 2-Clause License.
//  See the LICENSE file for details.
//

#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include "ansilove.h"

int
ansilove_clean(struct ansilove_ctx *ctx) {
	if (ctx == NULL)
		return -1;

	gdFree((void *)ctx->png.buffer);
	ctx->png.length = 0;

	return 0;
}