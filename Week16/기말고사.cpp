#include <iostream>
int n = 2;
namespace Foo {
    int n = 1;
    int foo(int n) {
        return Foo::n*n;
    }
}
int main() {
    int n = 3;
    int r = n + Foo::foo(n);
    std::cout << r << std::endl;
}
