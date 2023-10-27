# dsa

A data structures and algorithms library

## Prerequisites

- CMake
- C++ compiler with C++11 support
- GTest (optional, for unit tests only)

## Build

To build the library, go to the project's root directory and execute the following commands:

```shell
# Prepare the buildsystem
cmake -DCMAKE_BUILD_TYPE=Debug \
      -DCMAKE_CXX_FLAGS="-std=c++11" \
      -S . -B build/debug

# Build
cmake --build build/debug --target dsa
```

## Build options

|       Name        |               Description                | Since | Default |
|:-----------------:|:----------------------------------------:|:-----:|:-------:|
| `DSA_BUILD_TESTS` | Create a build target for the unit tests | 0.0.0 |   OFF   |

## Author

Oleg E. Vorobiov <isnullxbh@gmail.com>

## License

This project is distributed under the MIT License. See [LICENSE](LICENSE) for more information.
