#include "foo.pb.h"
 
int main(int argc, char *argv[]) {
    foo::Bar bar;
    bar.set_id(10);
    std::cout << "id: " << bar.id() << std::endl;
    return 0;
}