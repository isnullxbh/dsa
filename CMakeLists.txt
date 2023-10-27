cmake_minimum_required(VERSION 3.23)
project(dsa VERSION 0.0.0
            DESCRIPTION "A data structures and algorithms library"
            HOMEPAGE_URL "https://github.com/isnullxbh/dsa"
            LANGUAGES ASM C CXX)

option(DSA_BUILD_TESTS "Create a build target for the unit tests" OFF)

add_subdirectory(src)

if(DSA_BUILD_TESTS)
    add_subdirectory(tests)
endif()
