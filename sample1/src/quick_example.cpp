#include <iostream>
#include <string>
#include <emscripten/bind.h>
using namespace emscripten;

std::string Hello() {
    return("Hello world from C++");
}

int Add(int a, int b) {
    return(a + b);
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("c_hello", &Hello);
    function("c_add", &Add);
}