# dsa

A data structures and algorithms library

## Getting started

### Build

Go to the project's root directory and execute the following commands:

```shell
# Generate makefiles
cmake -DCMAKE_BUILD_TYPE=Debug \
      -DCMAKE_CXX_FLAGS="-std=c++20" \
      -S . -B build/debug

# Build
cmake --build build/debug --target dsa --parallel $(nproc)
```

## Author

Oleg E. Vorobiov <isnullxbh@gmail.com>

## License

This project is distributed under the MIT License. See [LICENSE](LICENSE) for more information.
