cmake_minimum_required(VERSION 3.16)

project(doctest-test)

# Uncomment to break (1)
# set(CMAKE_C_VISIBILITY_PRESET hidden)
# set(CMAKE_CXX_VISIBILITY_PRESET hidden)
# set(CMAKE_VISIBILITY_INLINES_HIDDEN 1)

# Uncomment to break (2)
# if ((CMAKE_CXX_COMPILER_ID STREQUAL "GNU" AND NOT APPLE) OR
#         (CMAKE_CXX_COMPILER_ID MATCHES "Clang" AND NOT APPLE) OR
#         (CMAKE_CXX_COMPILER_ID STREQUAL "Intel" AND NOT WIN32))
#     # Do not allow undefined symbols, even in non-symbolic shared libraries
#     set(CMAKE_SHARED_LINKER_FLAGS "-Wl,--no-undefined ${CMAKE_SHARED_LINKER_FLAGS}")
#     set(CMAKE_MODULE_LINKER_FLAGS "-Wl,--no-undefined ${CMAKE_MODULE_LINKER_FLAGS}")
# endif()


find_package(doctest REQUIRED)

add_subdirectory(src)
add_subdirectory(tests)
