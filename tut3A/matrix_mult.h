#ifndef __MATRIX_MULT_H__
#define __MATRIX_MULT_H__

#define HW_COSIM

#define IN_A_ROWS 5
#define IN_A_COLS 5
#define IN_B_ROWS 5
#define IN_B_COLS 5

typedef signed char mat_a;
typedef signed char mat_b;
typedef signed short mat_prod;

void matrix_mult(
    mat_a a[IN_A_ROWS][IN_A_COLS],
    mat_b b[IN_B_ROWS][IN_B_COLS],
    mat_prod prod[IN_A_ROWS][IN_B_COLS]);

#endif
