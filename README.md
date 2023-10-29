# dsa

A data structures and algorithms library

## Prerequisites

- CMake
- C++ compiler with C++20 support
- GTest (optional, for unit tests only)

## Build

To build the library, go to the project's root directory and execute the following commands:

```shell
# Prepare the buildsystem
cmake -DCMAKE_BUILD_TYPE=Debug \
      -DCMAKE_CXX_FLAGS="-std=c++20" \
      -S . -B build/debug

# Build
cmake --build build/debug --target dsa
```

## Build options

|       Name        |               Description                | Since | Default |
|:-----------------:|:----------------------------------------:|:-----:|:-------:|
| `DSA_BUILD_TESTS` | Create a build target for the unit tests | 0.0.0 |   OFF   |

## Documentation

To generate docs, go to the project's root directory and execute the following command:

```shell
# Assumes that you have already prepared the buildsystem
cmake --build build/debug --target dsa.generate-docs
```

## Index

- Algorithms
  - Sorting
    - [Insertion sort](include/dsa/sorting/insertion_sort.hpp)
  - Comparators
    - [equal](include/dsa/comparators.hpp)
    - [not_equal](include/dsa/comparators.hpp)
    - [less](include/dsa/comparators.hpp)
    - [less_or_equal](include/dsa/comparators.hpp)
    - [greater](include/dsa/comparators.hpp)
    - [greater_or_equal](include/dsa/comparators.hpp)
- Concepts
  - [comparator](include/dsa/comparator.hpp)

## Author

Oleg E. Vorobiov <isnullxbh@gmail.com>

## License

This project is distributed under the MIT License. See [LICENSE](LICENSE) for more information.
