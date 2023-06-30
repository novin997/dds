<!-- Build CMake to generate Ninja Build Files -->
cmake -B ./build -G Ninja

<!-- Run ninja in build folder-->
ninja -C ./build

<!-- Run OpenDDS Code in build folder-->
./build/opendds_project -DCPSConfigFile ./build/DCPSConfig.ini