#include <iostream>
#include "classes.h"

int main() {


    lorry test = lorry("Ural", 16, 500, 100);
    std::cout << test << "\n";

    std::cout << "Set name ";
    std::string mark;
    std::cin >> mark;
    test.set_mark(mark);
    std::cout << "mark is: " << test.get_mark() << "\n";

    std::cout << "Set cylinders ";
    int cylinders;
    std::cin >> cylinders;
    test.set_cylinders(cylinders);
    std::cout << "cylinders is: " << test.get_cylinders() << "\n";

    std::cout << "Set power ";
    double power;
    std::cin >> power;
    test.set_power(power);
    std::cout << "power is: " << test.get_power() << "\n";

    std::cout << "Set load capacity ";
    double load_capacity;
    std::cin >> load_capacity;
    test.set_load_capacity(load_capacity);
    std::cout << "power is: " << test.get_load_capacity() << "\n";

    return 0;
};