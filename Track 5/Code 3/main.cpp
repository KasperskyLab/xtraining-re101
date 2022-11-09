#include <iostream>
#include <string>
#include <vector>

void string_demo() {
    std::string s("Hello");
    s.append(" world");
    for (auto c : s) {
        std::cout << c << std::endl;
    }
}

void vector_demo() {
    std::vector<int> v(100);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
}

int main(int argc, char** argv) {
    string_demo();
    vector_demo();
}


