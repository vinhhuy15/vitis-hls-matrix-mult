#include "matrix_mult.h"

void matrix_mult(
    mat_a a[IN_A_ROWS][IN_A_COLS],
    mat_b b[IN_B_ROWS][IN_B_COLS],
    mat_prod prod[IN_A_ROWS][IN_B_COLS])
{
#pragma HLS ARRAY_RESHAPE variable=a complete dim=2
#pragma HLS ARRAY_RESHAPE variable=b complete dim=1

Row:
    for (int i = 0; i < IN_A_ROWS; i++) {
    Col:
        for (int j = 0; j < IN_B_COLS; j++) {
#pragma HLS PIPELINE II=1
            prod[i][j] = 0;

        Product:
            for (int k = 0; k < IN_B_ROWS; k++) {
                prod[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
