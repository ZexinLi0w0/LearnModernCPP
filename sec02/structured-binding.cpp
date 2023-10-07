//
// Created by zexin li on 10/7/23.
//
#include <iostream>
#include <tuple>

std::tuple<int, double, std::string> f() {
    return std::make_tuple(1, 2.3, "456");
}

int main() {
    // Before C++17
//    std::tuple<int, double,  std::string> tuple = f();
//    int x;
//    double y;
//    std::string z;
//    std::tie(x, y, z) = f();

    auto [x, y, z] = f();
    std::cout << x << ", " << y << ", " << z << std::endl;
    return 0;
}