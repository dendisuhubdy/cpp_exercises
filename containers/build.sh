rm -rf build
mkdir -p build
cd build
cmake ..
make -j2 all
./containers
cd ..
