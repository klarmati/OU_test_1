#include <iostream>


void bump(int& variable) {
    ++variable;
}

int main() {
    std::cout << "Hello World!\n";
    int a{20};
    int& ref = a;

    while (a<200) {

        bump(ref);
        std::cout << a << '\n';
    }

    return 0;
}