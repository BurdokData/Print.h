#pragma once

#include <iostream>

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
    
    template<WPrintable T>
    void wprint(T printable) {
        std::wcout << printable;
    }
}
