#ifndef LIMITS_COMMON_H
#define LIMITS_COMMON_H

#include <stdio.h>
#include <errno.h>
#include <limits.h>
#include <string.h>

void sysconf_dbg(const char *, int);
void fpathconf_dbg(const char *, int, int);


#endif
