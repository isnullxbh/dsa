add_library(dsa)

target_include_directories(dsa
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/../include)

target_sources(dsa
    PRIVATE
        dsa/dsa.cpp)
