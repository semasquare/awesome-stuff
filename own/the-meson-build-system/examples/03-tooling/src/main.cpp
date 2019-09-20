#include <cstdlib>
#include <iostream>

#include "tooling.hpp"

int main() {
    std::cout << tooling::hello() << std::endl;

    std::cout << "name:    " << tooling::config::NAME << std::endl;
    std::cout << "version: " << tooling::config::VERSION << std::endl;
    std::cout << "commit:  " << tooling::config::COMMIT << std::endl;
    std::cout << "os:      " << tooling::config::OS << std::endl;
    std::cout << "cpu:     " << tooling::config::CPU << std::endl;

    return 0;
}
