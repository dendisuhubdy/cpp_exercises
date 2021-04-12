rm -rf build
mkdir -p build
cd build
cmake .. -G Ninja
ninja -j2 all
./function
cd ..
