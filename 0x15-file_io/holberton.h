#ifndef HOLBERTON_H
#define HOLBERTON_H

/* library files*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*function prototypes*/

ssize_t read_textfile(const char *filename, size_t letters);

#endif /* HOLBERTON_H */
