// build.c
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char comp[] = "gcc -o ";
    char out_name[] = "../string/main";
    char* files[] = {
        "../string/main.c",
        "../string/string.c",
        NULL
    };

    char cmd[500];

    strcat(cmd, comp);
    strcat(cmd, out_name);
    
    int i = 0;
    while (files[i] != NULL) {
        strcat(cmd, " ");
        strcat(cmd, files[i]);
        i++;
    }


    printf("Compiling and linking: %s\n", cmd);
    int result = system(cmd);

    if (result != 0) {
        fprintf(stderr, "Compilation or linking failed with code %d\n", result);
        return 1;
    }

    printf("Compilation and linking successful.\n");

    return 0;
}