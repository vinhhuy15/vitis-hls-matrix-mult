#include "matrix_mult.h"

void matrix_mult(
    mat_a a[IN_A_ROWS][IN_A_COLS],
    mat_b b[IN_B_ROWS][IN_B_COLS],
    mat_prod prod[IN_A_ROWS][IN_B_COLS])
{
Row:
    for (int i = 0; i < IN_A_ROWS; i++) {
    Col:
        for (int j = 0; j < IN_B_COLS; j++) {
            prod[i][j] = 0;

        Product:
            for (int k = 0; k < IN_B_ROWS; k++) {
                prod[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
