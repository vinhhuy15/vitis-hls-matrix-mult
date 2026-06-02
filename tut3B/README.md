Tutorial 3B - Design optimization
=================================

This folder contains five independent HLS source sets for the optimization
steps in Tutorial 3B.

Solutions:
- `solution1_baseline`: original design without optimization directives.
- `solution2_pipeline_product`: pipeline directive on the inner Product loop.
- `solution3_pipeline_col`: pipeline directive on the Col loop.
- `solution4_array_reshape`: array reshape plus Col loop pipeline.
- `solution5_pipeline_function`: pipeline directive at function level.

Each solution folder contains its own source files and `run_hls.tcl`, so it can
be opened or run independently in Vitis HLS.
