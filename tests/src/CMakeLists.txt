find_package(GTest CONFIG REQUIRED)

add_executable(dsa.tests)

target_include_directories(dsa.tests
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/../include)

target_sources(dsa.tests
    PRIVATE
        main.cpp)

target_link_libraries(dsa.tests
    PRIVATE
        GTest::gtest
        dsa)
