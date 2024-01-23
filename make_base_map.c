// making base map (matrix)
// square matrix, zero vector
// max size : 100 x 100

#include <stdio.h>

int* create_base (int column_size, int *row_ptr); 

int main()
{
    int mat[100][100];
    int column_size = 0;
    
    scanf ("%d", &column_size);
    
    for (int i = 0; i < column_size; i++)
    {
        printf ("%p\n", create_base(column_size, mat[i]));
    }
    
    return 0;
}

int* create_base (int column_size, int *row_ptr)
{
    for (int i = 0; i < column_size; i++)
    {
        row_ptr[i] = 0; // zero vector
    }
    
    return row_ptr;
}
