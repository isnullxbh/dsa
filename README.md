# dsa

A data structures and algorithms library

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

## Author

Oleg E. Vorobiov <isnullxbh@gmail.com>

## License

This project is distributed under the MIT License. See [LICENSE](LICENSE) for more information.
