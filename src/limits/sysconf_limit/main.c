#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits/common.h>


void
sysconf_dbg(const char *msg, int name) {
    long lim;
    errno = 0;
    lim = sysconf(name);                                

    if(lim != -1)                                   /* Call succeeded, limit determinate */
        printf("%-20s %ld\n", msg, lim);
    else {
        if (errno == 0)                             /* Call succeded, limit indeterminate */
            printf("%s (indeterminate)\n", msg);
        else
            printf("sysconf %s", msg);               /* call failed */
    }
}


int
main(int argc, char *argv[]) {
    sysconf_dbg("_SC_ARG_MAX: ", _SC_ARG_MAX);
    sysconf_dbg("_SC_LOGIN_NAME_MAX: ", _SC_LOGIN_NAME_MAX);
    sysconf_dbg("_SC_OPEN_MAX: ", _SC_OPEN_MAX);
    sysconf_dbg("_SC_NGROUPS_MAX: ", _SC_NGROUPS_MAX);
    sysconf_dbg("_SC_PAGESIZE: ", _SC_PAGESIZE);
    sysconf_dbg("_SC_RTSIG_MAX: ", _SC_RTSIG_MAX);

    exit(EXIT_SUCCESS);
}
