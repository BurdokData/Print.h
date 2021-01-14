#pragma once

#include <iostream>
#include <sstream>

namespace mdlacey {
    template<typename T>
    concept Printable = requires(T a) {
        std::cout << a;
    };

    template<typename T>
    concept WPrintable = requires(T a) {
        std::wcout << a;
    };

    template<Printable T>
    void println(T printable) {
        std::cout << printable << "\n";
    }

    template<WPrintable T>
    void wprintln(T printable) {
        std::wcout << printable << "\n";
    }

    template<Printable T>
    void print(T printable) {
        std::cout << printable;
    }
}