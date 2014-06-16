hello
=====

hello world test


download (clone)
=====

git clone https://github.com/Combe-Martin/hello.git

building
=====

* default

```Bash
mkdir build
cd build
cmake ../
make 
```

* debug version: 

```Bash
mkdir debug
cd debug
cmake -DCMAKE_BUILD_TYPE=Debug ../
make
```

* release version:

```Bash
mkdir release
cd release
cmake -DCMAKE_BUILD_TYPE=Release ../
make
```
