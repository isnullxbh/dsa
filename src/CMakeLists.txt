add_library(dsa)

set_target_properties(dsa
    PROPERTIES
        OUTPUT_NAME "dsa"
        PREFIX      "")

target_include_directories(dsa
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/../include
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR})

target_sources(dsa
    PRIVATE
        dsa/dsa.cpp)
