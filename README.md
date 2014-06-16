hello
=====

hello world test


download (clone)
=====

git clone https://github.com/Combe-Martin/hello.git

building
=====

default:

mkdir build
cd build
cmake ../
make 

debug version: 

mkdir debug
cd debug
cmake -DCMAKE_BUILD_TYPE=Debug ../
make

release version:

mkdir release
cd release
cmake -DCMAKE_BUILD_TYPE=Release ../
make

