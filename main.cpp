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

    enum f {
        trr,
        frr,
        zrr
    };

    return 0;
}