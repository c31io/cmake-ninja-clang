# cmake-ninja-clang

C++ project template with CMake-Ninja-Clang toolchain.

```
mkdir build
cd build
cmake .. -GNinja -D CMAKE_C_COMPILER=clang -D CMAKE_CXX_COMPILER=clang++
ninja
src/HelloWorld
```
