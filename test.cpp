#include <mavsdk/mavsdk.h>
#include <iostream>

int main(int argc, char* argv[])
{
    mavsdk::Mavsdk mavsdk;
    std::cout << "Using MAVSDK version: " << mavsdk.version() << std::endl;
    return 0;
}
