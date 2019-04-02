#ifndef _SCHAUFEL_LOGGER_H_
#define _SCHAUFEL_LOGGER_H_

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <stdarg.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <utils/config.h>
#include <search.h>

#define LOG_BUFFER_SIZE 4096
#define FORMAT_PRINTF(x,y) __attribute__((format (printf,(x),(y))))

int logger_validate(config_setting_t *config);
void logger_init(config_setting_t *config);
void logger_free();
void logger_log(const char *fmt, ...) FORMAT_PRINTF(1,2);

#endif
