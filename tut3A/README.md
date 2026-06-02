Tutorial 3A - Create HLS project
================================

This folder contains the baseline matrix multiplication source files for
Tutorial 3A.

Files:
- `matrix_mult.h`: type definitions and top-level function prototype.
- `matrix_mult.cpp`: baseline 5x5 matrix multiplication.
- `matrix_mult_test.cpp`: C testbench that compares hardware C-model output
  against a software reference.
- `run_hls.tcl`: script to create the HLS project, run C simulation, and leave
  the project ready for the next steps in Vitis HLS.
