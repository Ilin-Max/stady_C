#include <stdio.h>

int main (int argc, char **argv)
{   
    printf("Start programs: %s\n", argv[0]);

    int i;
    for (i = 1; i < argc; i ++){
        printf("Parameters %d: [%s]\n", i, argv[i]);
    }

    return 0;
}
