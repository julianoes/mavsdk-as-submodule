# mavsdk-as-submodule

A test repo which contains mavsdk as a submodule to check if it is possible and easy to use MAVSDK as a submodule.

## Steps to try

```
git clone --recursive https://github.com/julianoes/mavsdk-as-submodule.git
cmake -Bbuild -H.
cmake --build build -j8
build/test
```

This should build and print out the MAVSDK version.
