#include "Hello.hpp"

namespace helloworld {

void sayHello(const std::string &str)
{
    std::cout << "Hello "
              << str
              << "!" << std::endl;
}

}
