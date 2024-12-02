#ifndef ARRAY_H
#define ARRAY_H

typedef struct Rarray{
    int *data;
}Rarray;

Rarray* create_rarray(int size);
int get_array_size(); // col 0 for first col, col 1 for second col
void populate_rarray(Rarray *arr);
void sort_array(Rarray *arr);
int calcuate_sum_of_disparity(Rarray *arr_left, Rarray *arr_right);




#endif