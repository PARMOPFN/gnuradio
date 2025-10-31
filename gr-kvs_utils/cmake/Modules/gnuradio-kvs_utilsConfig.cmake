find_package(PkgConfig)

PKG_CHECK_MODULES(PC_GR_KVS_UTILS gnuradio-kvs_utils)

FIND_PATH(
    GR_KVS_UTILS_INCLUDE_DIRS
    NAMES gnuradio/kvs_utils/api.h
    HINTS $ENV{KVS_UTILS_DIR}/include
        ${PC_KVS_UTILS_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    GR_KVS_UTILS_LIBRARIES
    NAMES gnuradio-kvs_utils
    HINTS $ENV{KVS_UTILS_DIR}/lib
        ${PC_KVS_UTILS_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
          )

include("${CMAKE_CURRENT_LIST_DIR}/gnuradio-kvs_utilsTarget.cmake")

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(GR_KVS_UTILS DEFAULT_MSG GR_KVS_UTILS_LIBRARIES GR_KVS_UTILS_INCLUDE_DIRS)
MARK_AS_ADVANCED(GR_KVS_UTILS_LIBRARIES GR_KVS_UTILS_INCLUDE_DIRS)
