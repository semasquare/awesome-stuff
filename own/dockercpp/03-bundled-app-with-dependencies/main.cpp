#include <sys/stat.h>
#include <cmath>

#include <iostream>

bool isRunningInContainer()
{
    struct stat buffer;
    return (stat("/.dockerenv", &buffer) == 0);
}

int main()
{
    if (isRunningInContainer())
    {
        std::cout << "Hello from Docker!" << std::endl;
    }
    else
    {
        std::cout << "Hello!" << std::endl;
    }

    std::cout << "2² = " << pow(2, 2) << std::endl;

    return 0;
}
