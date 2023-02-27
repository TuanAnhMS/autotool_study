#include <stdio.h>
#include <iostream>
class Helper {
    public:
    void help();
    Helper() {
        std::cout << "Helper here";
    }
    ~Helper() {
        //do nothing
    }
};