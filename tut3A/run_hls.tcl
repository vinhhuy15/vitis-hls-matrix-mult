open_project -reset matrix_mult_prj

add_files matrix_mult.cpp
add_files matrix_mult.h
add_files -tb matrix_mult_test.cpp
set_top matrix_mult

open_solution -reset solution1
set_part {xc7z020clg484-1}
create_clock -period 5

csim_design

exit
