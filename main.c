#include <stdio.h>

#include "private.h"

int main(int argc, char *argv[])
{
    mystruct x;

    x.dummy = 1;

    printf("X.DUMMY %ld\n", x.dummy);

    exit(0);
}
