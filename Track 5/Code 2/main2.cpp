#include <string>
#include <iostream>

class Base {
    protected:
        std::string field;

    public:
        Base() : field("Hello") {}
        void hello() { std::cout << field << std::endl; }
        virtual void message() { printf("%s\n", "From the Base class"); }
        virtual void message2() { printf("%s\n", "Another message from the Base class"); }
};

class Sub : public Base {
    private:
        int unused = 0;
        int unused_2 = 0xFFFFFFFF;

    public:
        Sub() { field.append(" world!"); }
        void message() { printf("%s\n", "From the Sub class"); }
};

int main(int argc, char ** argv) {
    Base b;
    Sub s;
    b.hello();
    s.hello();
    b.message();
    s.message();

    Base* ptr = &s;
    ptr->message();
}


