# Copyright 2020 Free Software Foundation, Inc.
#
# This file is part of GNU Radio
#
# SPDX-License-Identifier: GPL-3.0-or-later
#

########################################################################
# Check if there is C++ code at all
########################################################################
if(NOT kvs_utils_sources)
    message(STATUS "No C++ sources... skipping python bindings")
    return()
endif(NOT kvs_utils_sources)

########################################################################
# Check for pygccxml
########################################################################
gr_python_check_module_raw("pygccxml" "import pygccxml" PYGCCXML_FOUND)

include(GrPybind)

########################################################################
# Python Bindings
########################################################################

list(APPEND kvs_utils_python_files
    divide_by_2_ff_python.cc python_bindings.cc)

gr_pybind_make_oot(kvs_utils ../../.. gr::kvs_utils "${kvs_utils_python_files}")

# copy bindings extension for use in QA test module
add_custom_command(
    TARGET kvs_utils_python
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:kvs_utils_python>
            ${PROJECT_BINARY_DIR}/test_modules/gnuradio/kvs_utils/)

install(
    TARGETS kvs_utils_python
    DESTINATION ${GR_PYTHON_DIR}/gnuradio/kvs_utils
    COMPONENT pythonapi)
