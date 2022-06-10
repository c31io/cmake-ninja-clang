#include "helloworld.hpp"

namespace helloworld {

void run()
{
    std::string s ("world");
    sayHello(s);
}

}

int main()
{
    helloworld::run();
    return 0;
}
