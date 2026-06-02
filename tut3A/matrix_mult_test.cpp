#include <iostream>
#include "matrix_mult.h"

using namespace std;

int main()
{
    mat_a in_mat_a[IN_A_ROWS][IN_A_COLS] = {
        {0, 0, 0, 0, 1},
        {0, 0, 0, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 1, 0, 0, 0},
        {1, 0, 0, 0, 0}
    };

    mat_b in_mat_b[IN_B_ROWS][IN_B_COLS] = {
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 1},
        {0, 0, 1, 1, 1},
        {0, 0, 0, 1, 1},
        {0, 0, 0, 0, 1}
    };

    mat_prod hw_result[IN_A_ROWS][IN_B_COLS];
    mat_prod sw_result[IN_A_ROWS][IN_B_COLS];
    int error_count = 0;

    for (int i = 0; i < IN_A_ROWS; i++) {
        for (int j = 0; j < IN_B_COLS; j++) {
            sw_result[i][j] = 0;
            for (int k = 0; k < IN_B_ROWS; k++) {
                sw_result[i][j] += in_mat_a[i][k] * in_mat_b[k][j];
            }
        }
    }

#ifdef HW_COSIM
    matrix_mult(in_mat_a, in_mat_b, hw_result);
#endif

    for (int i = 0; i < IN_A_ROWS; i++) {
        for (int j = 0; j < IN_B_COLS; j++) {
#ifdef HW_COSIM
            if (hw_result[i][j] != sw_result[i][j]) {
                error_count++;
                cout << "Mismatch at [" << i << "][" << j << "]: HW = "
                     << hw_result[i][j] << ", SW = " << sw_result[i][j]
                     << endl;
            }
#else
            cout << sw_result[i][j] << " ";
#endif
        }
#ifndef HW_COSIM
        cout << endl;
#endif
    }

#ifdef HW_COSIM
    if (error_count == 0) {
        cout << "Test passed!" << endl;
    } else {
        cout << "TEST FAIL: " << error_count << " results do not match!" << endl;
    }
#endif

    return error_count;
}
