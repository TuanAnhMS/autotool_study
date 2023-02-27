#include <iostream>
#include "helper.h"
#include "./my_inc/myadd.h"

int main() {
    MyAdd add_obj;
    std::cout << "Addition result:" << add_obj.add(1, 1) << std::endl;
    return 0;
}