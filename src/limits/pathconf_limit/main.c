#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits/common.h>

void
fpathconf_dbg(const char *msg, int fd, int name) {
    long lim;
    errno = 0;
    lim = fpathconf(fd, name);

    if(lim != -1)
        printf("%-20s => %-4d: %ld\n", msg, fd, lim);
    else {
        if(errno)
            perror("Could not retrieve fpathconf limit.");

        printf("Could not determine limit: %s %d\n", msg, name);
    }
}

int
main(int argc, char *argv[]) {
    fpathconf_dbg("_PC_NAME_MAX: ", STDIN_FILENO, _PC_NAME_MAX);
    fpathconf_dbg("_PC_PATH_MAX: ", STDIN_FILENO, _PC_PATH_MAX);
    fpathconf_dbg("_PC_PIPE_BUF: ", STDIN_FILENO, _PC_PIPE_BUF);

    exit(EXIT_SUCCESS);
}

