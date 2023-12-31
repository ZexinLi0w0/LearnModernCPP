//
// Created by zexin li on 10/7/23.
//
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4};

    // c++17
    if (const std::vector<int>::iterator itr = std::find(vec.begin(), vec.end(), 2);
    itr != vec.end()) {
        *itr = 3;
    }

    // 将临时变量放到 if 语句内
    if (const std::vector<int>::iterator itr = std::find(vec.begin(), vec.end(), 3);
            itr != vec.end()) {
        *itr = 4;
    }

    // 将输出 1, 4, 3, 4
    for (std::vector<int>::iterator element = vec.begin(); element != vec.end();
         ++element)
        std::cout << *element << std::endl;
}