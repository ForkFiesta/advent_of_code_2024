#include <stdio.h>
#include <stdlib.h>
#include "array.h"


int get_array_size(){
    FILE *file_ptr;

    char ch;

    file_ptr = fopen("input.txt", "r");
    if(!file_ptr){
        fprintf(stderr, "ERROR: File cannot be opened \n");
        return EXIT_FAILURE;

    }

    printf("Content of the file:\n");
    int count = 0;
    while((ch=fgetc(file_ptr))!= EOF){
        if(ch == '\n') count++;


    }

    fclose(file_ptr);
    return count;
}


int main(){
    int num_count = get_array_size();
    printf("Num count is %d\n", num_count);
    return 0;
}