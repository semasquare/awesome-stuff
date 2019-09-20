#include <sys/stat.h>

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

    return 0;
}
