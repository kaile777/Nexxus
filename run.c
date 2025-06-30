// run.c
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


    printf("Building: %s\n", cmd);
    int result = system(cmd);

    if (result != 0) {
        fprintf(stderr, "Build failed with code %d\n", result);
        return 1;
    }

    printf("Build successful.\nRunning...\n\n");
    
    int result_run = system(out_name);

    if (result_run != 0) {
        fprintf(stderr, "Run failed with code %d\n", result_run);
        return result_run;
    }

    return result_run;
}