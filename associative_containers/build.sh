rm -rf build
mkdir -p build
cd build
cmake ..
make -j2 all
./associative_containers
cd ..
