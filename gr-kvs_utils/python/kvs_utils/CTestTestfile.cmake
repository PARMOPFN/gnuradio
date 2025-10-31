# CMake generated Testfile for 
# Source directory: /home/karolf/projects/cessb/gr-kvs_utils/python/kvs_utils
# Build directory: /home/karolf/projects/cessb/gr-kvs_utils/python/kvs_utils
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(qa_divide_by_2_ff "/usr/bin/sh" "qa_divide_by_2_ff_test.sh")
set_tests_properties(qa_divide_by_2_ff PROPERTIES  _BACKTRACE_TRIPLES "/usr/lib64/cmake/gnuradio/GrTest.cmake;119;add_test;/home/karolf/projects/cessb/gr-kvs_utils/python/kvs_utils/CMakeLists.txt;37;GR_ADD_TEST;/home/karolf/projects/cessb/gr-kvs_utils/python/kvs_utils/CMakeLists.txt;0;")
subdirs("bindings")
