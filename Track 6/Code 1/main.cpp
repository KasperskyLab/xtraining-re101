#include <iostream>

class MyClass {
  private:
    int a;
    int b;
    int c;

  public:
    MyClass(int first, int second, int third)
        : a(first), b(second), c(third)
    {
        std::cout << "Constructor called: " << a << std::endl;
    }
};

int main(int argc, char** argv) {
    MyClass c(1, 2, 3);
}
